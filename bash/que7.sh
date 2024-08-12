#!/bin/bash
#
# print all file which are present is given directory.
num=0;
for i in /home/ramdas/Sandbox/bash/*; do
	if [ -f "$i" ]; then
		echo $i
		num=$(($num+1))
	fi
done

echo "Number of files in directory is " $num

i
