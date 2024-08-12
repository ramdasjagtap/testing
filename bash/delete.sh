#!/bin/bash

num=1
while [ $num -lt 11 ]; do
	filename=:"file$num.sh"
	rm $filename
	num=$(($num+1))
done

