#!/bin/bash

my_array=( 1 2 3 4 5 )
# accessing single element.
echo ${my_array[1]}
# printing all element of array.
echo ${my_array[@]}
unset my_array[2]
echo ${my_array[*]}
# array slicing.
b=${my_array:0:6}
echo ${b}

