#!/bin/bash

# Question 1
#echo "INPUT: $1 $2 $3"
#echo "OUTPUT: $3 $2 $1"

# Question 2
#mkdir -p $1
#cd $1
#touch file.txt

# Question 3
nlines=$(wc -l $1 | cut -d ' ' -f 1)
words=$(wc -l $1 | cut -d ' ' -f 1)
echo "Lines in $1 are $nlines"
echo "Words in $1 are $words"

# Question 4
cmd=$(which $1)
echo "INPUT $cmd"

