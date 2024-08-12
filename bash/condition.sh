#!/bin/bash

if [ $(whoami) = 'ramdas' ]; then
	echo "You are root."
fi

AGE=$1
if [ $AGE -lt 13 ]; then
	echo "You are a kid."
elif [ $AGE -lt 20 ]; then
	echo "You are a teenager."
elif [ $AGE -lt 65 ]; then
	echo "You are an adult."
else
	echo "You are an elder."
fi

CHAR=$2
case $CHAR in
	[a-z])
		echo "Small Alphabet.";;
	[A-Z]) 
		echo "Big Alphabet.";;
	[0-9])
		echo "Number.";;
	*)
		echo "Special Character."
esac


