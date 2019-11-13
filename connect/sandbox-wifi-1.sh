#!/bin/bash

# nmcli con up 1395-wallaby
# echo "You're connected to 1395-wallaby."
# scp -r root@192.168.125.1:'~/Documents/KISS/Default\ User/' ~/Documents/kipr/cms-norman-jbc-2016/1395-wallaby/
# echo "You saved from 1395-wallaby."

# i="1407-wallaby"
i="1395-wallaby"
echo $i
nmcli con up $i
echo "You're connected to $i."
scp -rqv root@192.168.125.1:'~/Documents/KISS/Default\ User/' \
  ~/Documents/kipr/cms-norman-jbc-2016/$i/  >> ~/Documents/kipr/cms-norman-jbc-2016/.logs/aa.md

echo "c1" >> ~/a.txt
date "+%F %T" >>  ~/Documents/kipr/jbc-2016/.logs/aa.md
date "+%F %T" >> ~/a.txt
echo "c2" >> ~/a.txt
echo "You saved from $i."

exit 0
