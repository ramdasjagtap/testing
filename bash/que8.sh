#!/bin/bash

# Question 1
# Print the text 10 times
echo "Question 1 \n"
for i in {1..10}; do
	echo "Hello $(whoami)"
done

# Question 2
# Printt the content of directory
echo "Question 2"
for i in /home/ramdas/Sandbox/bash/*; do
	echo $i;
done

# Question 3
# print the table of 3 
echo "Question 3"
num=1
while [ $num -le 10 ]; do
	echo $(($num*3))
	num=$(($num+1))
done

# Question 4
# print the table of 3
echo "Question 4"
n=1
until [ $n -gt 10 ]; do
	echo $(($n*3))
	n=$(($n+1))
done

# Question 5
# Traverse the array
echo "Question 5"
echo "First for loop "
my_array=(1,2,3,4,5,6,7,8,9,10)
for i in "${my_array[@]}"; do
	echo $i
done
echo "Second for loop "
for (( j = 0 ; j < 10 ; j++ )); do
	echo ${my_array[$j]}
done
