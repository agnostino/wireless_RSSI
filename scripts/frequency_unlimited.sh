#! /bin/sh

#! /bin/sh

echo "-----------------------------------------" && 
echo "offline 2nd cpu in multiprocessor system" && 
echo "-----------------------------------------" && 
echo 1 > /sys/devices/system/cpu/cpu1/online

sleep 2 &&

echo "------------------------" && 
echo "set governor: ondemand " && 
echo "------------------------" && 
cpufreq-set -g ondemand && 

sleep 2 &&

echo "-------------------" && 
echo "monitor cpu speed:" && 
echo "-------------------" && 
watch grep \"cpu MHz\" /proc/cpuinfo
