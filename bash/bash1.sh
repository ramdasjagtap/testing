#!/bin/bash

echo "What is your name?" 
# Taking user input.
read name;
echo "Hello, $name"

age=22;
echo "$name your are $age old."

# Constant.
readonly PI=3.14
echo "The Value of PI is $PI "

# cmd substitution.
TODAY=$(date)
#TODAY=`date`   this is old method.
echo $TODAY

echo "Hello $(whoami)"
