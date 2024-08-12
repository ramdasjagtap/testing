#!/bin/bash

# Question 1
# Check number is even or odd using function
echo "Question 1 " 
iseven () {
	if [ $(($1 % 2)) -eq 0 ]; then
		echo "$1 is even number"
	else
		echo "$1 is odd number"
	fi
}
iseven $1
echo 

# Question 2
# print the table of number
echo "Question 2"
function table () {
	for (( i = 1 ; i < 11 ; i++)); do
		echo $(($i*$1))
	done
}
table $1
echo

# Question 3
# Check number is prime or not
echo "Question 3"
function isprime () {
	for (( j = 2 ; j < $1 ; j++ )); do
		if [ $(($1 %2)) -eq 0 ]; then
			flag=false
		else
			flag=true
		fi
	done
}
isprime $1
echo "$1 is prime number (true/false)? " $flag
echo 
# Question 4
# fibonacci series using function
echo "Question 4"
function fib () {
	if [ $1 -le 1 ]; then
		echo $1
	else
		prev1=$(fib $(($1-1))) 
		prev2=$(fib $(($1-2)))
		echo $(($prev1 + $prev2))
	fi
}
for (( i = 0 ; i < 10 ; i++)); do
	fib_num=$(fib $i)
	echo -n $fib_num","
done
