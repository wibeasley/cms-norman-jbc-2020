#!/bin/bash
# chmod +x harvest-1b.sh

# If configured in VS Code, execute this script with F5.

# Declare names of wombat/wallaby robots (ie, their SSIDs).
#   To avoid storing passwords in code, initially connect to each robot (manually).
#   Make sure the password is saved on your machine, so future connections won't require them.
#   If a robot is missing or out of range, the script will skip over it after the nmcli times out.
#   Or temporarily comment out the robots in the array below.
#   Remember bash does not use commas when defining an array.
bot_ssids=(
  "4044-wombat"
  "4045-wombat"
  "4054-wombat"
  # "1395-wallaby"  # 8: A & C
  # "1397-wallaby"  # 4/5: E & C
  # "1407-wallaby"  # 4: E & E
  # "2488-wallaby"  # 6: A & E & R
  # "2494-wallaby"  # 8: A & E
  # "2486-wallaby"  # 3: E & H & R
  # "1399-wallaby"  # 3: P & P & R
  # "1408-wallaby"  # unassigned - usb
  # "4211-wallaby"  # unassigned - does not boot
)

# The wifi network connected to the outside world. Necessary if commits are pushed to GitHub.com
network_ssid="BeasleyGuest2"
# network_ssid="State Fair Free"
# network_ssid="Classen-Two 2.4"
use_wifi=true
# use_wifi=false
pattern_bot="^[0-9]{4,5}-(\w+)$"

if [ "$use_wifi" = true ] ; then
  url="192.168.125.1"  # For wifi connections to all robots
else
  url="192.168.124.1"  # For usb connection to any specific robot
fi
echo "url: $url; (use_wifi: $use_wifi)"
#url="23.208.224.170" # For debugging (ie, cisco.com)

echo "Looping over ${#bot_ssids[@]} robots"
for i in "${bot_ssids[@]}"
do
  echo "------------------------------------------"
  echo "Attempting to connect to $i."

  [[ $i =~ $pattern_bot ]]

  model=${BASH_REMATCH[1]}

  if [ "$model" = "wombat" ] ; then
    echo "Model: wombat"
    name="kipr"
  elif  [ "$model" = "wallaby" ] ; then
    echo "Model: wallaby"
    name="root"
  else
    echo "Model ""$model"" not recognized.  Skipping to the next robot"
    continue    # Proceed to the next robot.
  fi

  if [ "$use_wifi" = true ] ; then
    nmcli con up "$i"
    nmcli_return=$?
    echo "nmcli result: $nmcli_return (hint: a '0' means a successful connection)."

    if [[ $nmcli_return -ne 0 ]] ; then
      echo "Wifi connection failed; host $i not currently reachable apparently."
      continue    # Proceed to the next robot.
    fi
  fi

  #echo "url: $url."
  ping -c 1 $url
  ping_return=$?
  #echo "ping result of $url: $ping_return (hint: a '0' means a successful ping)."

  if [[ $ping_return -ne 0 ]] ; then
    echo "Ping failed; host $i not currently reachable on $url."
    continue    # Proceed to the next robot.
  fi

  echo "Attempting to download files from $i over $url."
  if [ "$model" = "wombat" ] ; then
    sshpass -f "password.txt" scp -rO $name@$url:'~/Documents/KISS/' ./$i/
  elif  [ "$model" = "wallaby" ] ; then
    scp -rO $name@$url:'~/Documents/KISS/' ./$i/
  else
    echo "Model ""$model"" not recognized.  Skipping to the next robot"
    continue    # Proceed to the next robot.
  fi

  #TODO: replace scp with rsync?  https://unix.stackexchange.com/questions/709613/ssh-working-on-all-devices-but-scp-from-some-devices-gives-connection-closed-e
  #if [ "$use_wifi" = true ] ; then
  #  scp -r root@192.168.125.1:'~/Documents/KISS/' ./$i/
  #else
  #  scp -r root@192.168.124.1:'~/Documents/KISS/' ./$i/
  #fi
  #scp -r root@192.168.124.1:'~/Documents/KISS/Default\ User/' ~/Documents/kipr/cms-norman-jbc-2020/$i/
  #scp_args=`echo -r root@$url:'~/Documents/KISS/Default\\ User/' ~/Documents/kipr/cms-norman-jbc-2020/$i/`
  #echo "SCP arguments:" $scp_args
  #scp $scp_args

  # Uncomment to simulate downloading files.
  # mkdir "1-$i"
  # echo $i >> "delete-me-$i/destination-$i.txt"

  echo "Completed $i."
done

echo "========================================="
echo "Completed loop over ${#bot_ssids[@]} robots"

#echo "Git add & commit"
git add -A
git status
# git commit -m "Update during class"

nmcli con up "$network_ssid"
sleep 5s
echo "Network status to [${network_ssid}]: $? (hint: a zero indicates a successful connection)."
#git push # Uncomment to automatically push commits to GitHub.com

# TODO:
# * if nmcli fails, try USB automatically
# * yaml config file that
#     * stores robot names (instead of a global variable included at the top of the script)
#     * contains a boolean flag if it should be attempted (if only 4 out of the school's robots are being used, don't bother polling the other three in the closet)
#     * stores the SSID of a network w/ an internet connection (eg, the school's) so the `git push` is effective.
#         * indicate in the yaml whether it should connect & push after backing up.
#     * default message in the git commits
#        * (Should this be dynamic?)
# * outputs a temporary text file that indicates how long it's been since each robot has been successfully backed up.
#     * this allows the teacher to merely glance at which robot need attention.

# Manual restore over USB
#scp -r ~/Documents/kipr/cms-norman-jbc-2020/2488-wallaby/ root@192.168.124.1:'~/Documents/KISS/'

# Manual update over USB
# scp -r root@192.168.124.1:'~/Documents/KISS/' ~/Documents/kipr/cms-norman-jbc-2020/1397-wallaby/

# Manual update over wifi
# scp -r root@192.168.125.1:'~/Documents/KISS/' ~/Documents/kipr/cms-norman-jbc-2020/1397-wallaby/

# Clean up a robot's user file
# 1) ssh root@192.168.125.1
# 2) nano ~/Documents/KISS/users.json

# References:
# - https://stackoverflow.com/questions/26824596/how-can-i-pipe-the-hostname-into-a-call-to-ssh
# - https://stackoverflow.com/questions/6118948/bash-loop-ping-successful
