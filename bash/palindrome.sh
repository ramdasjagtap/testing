#!/bin/bash

# Palindrome number
sum=0;
num=$1
original_num=$1
function reverse () {
	while [ $num -gt 0 ]; do
		res=$(($num%10))
		num=$(($num/10))
		sum=$(($sum*10+$res))
	done
	echo $sum
}	

#echo "Reverse number: "
reverse_num=$(reverse $num)

if [ $original_num -eq $reverse_num ]; then
	echo "Palindrome Number"
else
	echo "Not a palindrome Number"
fi


