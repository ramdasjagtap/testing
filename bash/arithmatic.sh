#!/bin/bash

fs1=$(du -b $1 | cut -f1)
fs2=$(du -b $2 | cut -f1)

echo "Size of $1 is : $fs1"
echo "Size of $2 is : $fs2"

total=$(($fs1+$fs2))
echo "Total size is: $total"

read -p "GB input: " GB
MB=$(($GB*1024))
echo "$GB Gb is equals to $MB Mb"

#Degree to fahrenheit conversion
read -p "Celsius" C
F=$(echo "scale=2; $C* (9/5) + 32" | bc -l)
echo $F
