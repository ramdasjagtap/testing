#!/bin/bash

# Question 1
echo " Q.1) Check number is +ve or -ve ?" 
read -p "Input for que1 " q1
if [ $q1 -lt 0 ]; then
	echo "Number is negative"
else
	echo "Number is positive"
fi

# Question 2
echo "Q.2) Check substring is present or not ?"
str="Linux is awesome operating system."
read -p "Enter substring " substr
if [[ $str == *"$substr"* ]]; then
	echo "$substr is present in $str"
else
	echo "$substr is not present in $str"
fi

# Question 3
echo "Q.3) Check file exists or not?"
read -p "Input for que3 " q3
if [ -e $q3 ]; then
	echo "File exist"
else
	echo "File does not exist"
fi

# Question 4
echo "Q.4) Check whether string is empty or not ?"
read -p "Input for que4 " q4
if [ -z $q4 ]; then
	echo "String is empty"
else
	echo "String is not empty"
fi

# Question 5
echo "Q.5) Check even or odd number? "
read -p "Input for que5 " q5
num=$(($q5%2))
if [ $num -eq 0 ]; then
	echo "Number is Even"
else
	echo "Number is Odd"
fi

