#!/bin/bash

#function function_name () {
#	commands
#}

#function hello () {
#	echo "Hello $(whoami)"
#}

#echo "Hello function call "
#hello

function iseven () {
	if [ $(($1 %2 )) -eq 0 ]; then
		echo "$1 is even"
	else
		echo "$1 is odd"
	fi
}

iseven 10
iseven 5
