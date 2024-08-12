#!/bin/bash
# Question 1
read -p "Enter NR " NR
read -p "Enter DR " DR
que=$(($NR/$DR))
rem=$(($NR%DR))
echo "Quotient: $que"
echo "Remainder: $rem"

# Question 2
read -p "Enter the number : " num
table=($(($num*1)) $(($num*2)) $(($num*3)) $(($num*4)) $(($num*5)) $(($num*6)) $(($num*7)) $(($num*8)) $(($num*9)) $(($num*10)))
echo ${table[@]}

# Question 3
read -p "Enter the length of REC " length
read -p "Enter the breadth of REC " breadth
echo "Area : " $(($length*$breadth))
echo "Perimeter : " $((2*$(($length+$breadth))))

# Question 4
area=$(echo "scale=2; (1/2)*$length*$breadth" | bc -l)
echo "Triagnle area: " $area;



