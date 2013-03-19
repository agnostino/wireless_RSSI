#! /bin/sh

echo "------------------------------------------" && 
echo "create /home/agostino/Scrivania/emerg.log" && 
echo "------------------------------------------" && 
echo > /home/agostino/Scrivania/emerg.log &&

echo "-----------------------------------" && 
echo "mod /etc/rsyslog.d/50-default.conf" && 
echo "-----------------------------------" && 
sudo cp /home/agostino/Scrivania/Dropbox/TESI/wireless/scripts/50-default.conf /etc/rsyslog.d/50-default.conf
