#!/bin/bash

#echo "Enter the filename - "
#read filename

nlines=$(wc -l < $1)
echo "There are $nlines lines in $1"


