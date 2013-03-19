#! /bin/sh

echo "-----------------------------------------" && 
echo "offline 2nd cpu in multiprocessor system" && 
echo "-----------------------------------------" && 
echo 0 > /sys/devices/system/cpu/cpu1/online

sleep 2 &&

echo "------------------------" && 
echo "set governor: userspace " && 
echo "------------------------" && 
cpufreq-set -g userspace && 

sleep 2 &&

echo "-----------------" && 
echo "set freq 3Ghz" && 
echo "-----------------" && 
cpufreq-set -f 3000Mhz && 

sleep 2 &&

echo "-------------------" && 
echo "monitor cpu speed:" && 
echo "-------------------" && 
watch grep \"cpu MHz\" /proc/cpuinfo