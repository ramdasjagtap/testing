#!/bin/bash
# Question 1
distro="Rocky linux is cool"
echo ${distro}

# Question 2
echo ${#distro}

# Question 3
linux=" and Open source OS"
echo $distro $linux

# Question 4
word="linux"
expr index "$distro" l

# Question 5
echo ${distro/Rocky/Mint}

