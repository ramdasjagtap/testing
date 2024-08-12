#!/bin/bash

# for ((i = 1 ; i < 11 ; i++)); do
#	echo "$i"
#done

#for item in {1..10}; do
#	echo $((10-$item))
#done

num=1
#while [ $num -le 10 ]; do
#	echo $(($num * 3))
#	num=$(($num+1))
#done


until [ $num -gt 10 ]; do
	echo $(($num*5))
	num=$(($num+1))
done
