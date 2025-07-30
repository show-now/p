#!/bin/bash

read -p "Enter the start num: " start
read -p "Enter the max num: " end

echo -n "Prime numbers between $start and $end: "

for ((i = start; i <= end; i++)); do
	if ((i < 2)); then
		continue
	fi

	prime=1

	for ((j = 2; j * j <= i; j++)); do
		if ((i % j == 0)); then
			prime=0
   			break
		fi
	done

	if ((prime)); then
		echo -n "$i "
	fi
done
echo
