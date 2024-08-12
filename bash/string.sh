:!/bin/bash

#read -p "Enter the first string " str1
#Prints the length of sting 1.
#echo ${#str1}

#read -p "Enter the second string "  str2
# concatinates the string.
#echo $str1 " " $str2

str="Bash is cool"
word="cool"
# print the index where $word starts.
expr index "$str" "$word"

str1="Fedorra is a free operating systems"
# string slicing
echo ${str1:0:7}
# Word replacing.
echo ${str1/Fedorra/Ubuntu}
echo ${str1/free}

legend="john nash"
actor="JULIA ROBERTS"
# upper case
echo ${legend^^}
# lower case
echo ${actor,,}
echo ${legend^^[jr]}


