#!/bin/bash

# Question 1
colors=("violet" "indigo" "blue" "green" "yellow" "orange" "red")
echo ${colors[@]}

# Question 2
read -p "pick a color " color
echo ${colors[$color]}

# Question 3
echo "Total number of colors in rainbow " ${#colors[@]}

# Quesion 4
temp=${colors[0]}
colors[0]=${colors[4]}
colors[4]=$temp
echo ${colors[@]}

# Question 5
colors+=("cyan")
echo ${colors[@]}


