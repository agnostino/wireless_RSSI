#! /bin/sh

# unistall
echo "----------------------------" && 
echo "unistall" && 
echo "----------------------------" && 
sudo apt-get remove --purge linux-headers-3.5.0-25-lowlatency &&

#sleep
sleep 2	&&

# install
echo "----------------------------" && 
echo "install" && 
echo "----------------------------" && 
sudo apt-get install linux-headers-3.5.0-25-lowlatency
