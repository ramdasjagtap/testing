#!/bin/bash

factorial () {
	if [ $1 -le 1 ]; then
		echo 1
	else
		last=$(factorial $(($1-1)))
		echo $(($1*last))
	fi
}

function fib () {
	if [ $1 -le 2 ]; then
		echo $1
	else
		prev1=$(fib $(($1-1))) 
		prev2=$(fib $(($1-2)))
		echo $(($prev1 + $prev2))
	fi
}

num=$1
echo "Factorial Numbers:- "
for (( j = 0 ; j < $num ; j++ )); do
	fact_num=$(factorial $j)
	echo "Factorial Number at $j is " $fact_num
done
echo 
echo "Fibonacci Numbers:- "
for (( i = 0 ; i < $num ; i++ )); do
	fib_num=$(fib $i)
	echo "Fibonacci Number at $i is " $fib_num
	
done
