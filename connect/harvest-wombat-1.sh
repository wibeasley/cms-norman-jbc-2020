#!/bin/bash
# chmod +x harvest-1.sh

# If configured in VS Code, execute this script with F5.

# Declare names of wombat links (ie, their SSIDs).
#   To avoid storing passwords in code, initially connect to each Wallaby (manually).
#   Make sure the password is saved on your machine, so future connections won't require them.
#   If a wallaby is missing or out of range, the script will skip over it after the nmcli times out.
#   Or temporarily comment out the Wallaby in the array below.
#   Remember bash does not use commas when defining an array.
bot_ssids=(
  "4054-wombat"
)

# The wifi network connected to the outside world. Necessary if commits are pushed to GitHub.com
network_ssid="BeasleyGuest2"
# network_ssid="State Fair Free"
# network_ssid="Classen-Two 2.4"
use_wifi=true
# use_wifi=false

if [ "$use_wifi" = true ] ; then
  url="192.168.125.1"  # For wifi connections to wombats
# else
#   url="192.168.124.1"  # For usb connection to any wombats
fi
echo "url: $url; (use_wifi: $use_wifi)"
#url="23.208.224.170" # For debugging (ie, cisco.com)

echo "Looping over ${#bot_ssids[@]} Wombats"
for i in "${bot_ssids[@]}"
do
  echo "------------------------------------------"
  echo "Attempting to connect to $i."

  if [ "$use_wifi" = true ] ; then
    nmcli con up "$i"
    nmcli_return=$?
    echo "nmcli result: $nmcli_return (hint: a '0' means a successful connection)."

    if [[ $nmcli_return -ne 0 ]] ; then
      echo "Wifi connection failed; host $i not currently reachable apparently."
      continue    # Proceed to the next Wallaby.
    fi
  fi

  #echo "url: $url."
  ping -c 1 $url
  ping_return=$?
  #echo "ping result of $url: $ping_return (hint: a '0' means a successful ping)."

  if [[ $ping_return -ne 0 ]] ; then
    echo "Ping failed; host $i not currently reachable on $url."
    continue    # Proceed to the next Wallaby.
  fi

  echo "Attempting to download files from $i over $url."
  scp -rO kipr@$url:'~/Documents/KISS/' ./$i/

  #TODO: replace scp with rsync?  https://unix.stackexchange.com/questions/709613/ssh-working-on-all-devices-but-scp-from-some-devices-gives-connection-closed-e
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
echo "Completed loop over ${#bot_ssids[@]} Wombat"

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
#     * stores Wallaby names (instead of a global variable included at the top of the script)
#     * contains a boolean flag if it should be attempted (if only 4 out of the school's Wallabies are being used, don't bother polling the other three in the closet)
#     * indicates the users on each Wallaby (instead of backing up only `Default User`)
#     * stores the SSID of a network w/ an internet connection (eg, the school's) so the `git push` is effective.
#         * indicate in the yaml whether it should connect & push after backing up.
#     * default message in the git commits
#        * (Should this be dynamic?)
# * outputs a temporary text file that indicates how long it's been since each Wallaby has been successfully backed up.
#     * this allows the teacher to merely glance at which Wallabies need attention.

# Manual restore over USB
#scp -r ~/Documents/kipr/cms-norman-jbc-2020/2488-wallaby/ root@192.168.124.1:'~/Documents/KISS/'


# Manual update over USB
# scp -r root@192.168.124.1:'~/Documents/KISS/' ~/Documents/kipr/cms-norman-jbc-2020/1397-wallaby/

# Manual update over wifi
# scp -r root@192.168.125.1:'~/Documents/KISS/' ~/Documents/kipr/cms-norman-jbc-2020/1397-wallaby/

# Clean up a Wallaby's user file
# 1) ssh root@192.168.125.1
# 2) nano ~/Documents/KISS/users.json

# References:
# - https://stackoverflow.com/questions/26824596/how-can-i-pipe-the-hostname-into-a-call-to-ssh
# - https://stackoverflow.com/questions/6118948/bash-loop-ping-successful
