#! /bin/sh

# umount rtl8187 module
echo "----------------------------" && 
echo "umount rtl8187 driver" && 
echo "----------------------------" && 
sudo modprobe -r rtl8187
