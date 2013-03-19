#! /bin/sh

# umount rtl8187 module
echo "----------------------------" && 
echo "umount rtl8187 driver" && 
echo "----------------------------" && 
sudo modprobe -r rtl8187

# cd driver directory
echo "----------------------------" && 
echo "cd driver directory" && 
echo "----------------------------" && 
cd /home/agostino/Scrivania/Dropbox/TESI/wireless/compat-wireless-3.5.4-1-s/ && 

#install
echo "----------------------------" && 
echo "install" && 
echo "----------------------------" && 
sudo make install
