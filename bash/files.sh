#!/bin/bash

for (( i = 1 ; i < 11 ; i++ )); do
	filename="file$i.sh"
	touch $filename
done

