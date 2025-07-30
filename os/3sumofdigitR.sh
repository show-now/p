#!/bin/bash

sum_digits() {
    local num=$1
    if [ $num -lt 10 ]; then
        echo $num
    else
        local last_digit=$(( num % 10 ))
        local remaining_number=$(( num / 10 ))
        local recursive_sum=$(sum_digits $remaining_number)
        local sum=$(( last_digit + recursive_sum ))
        echo $sum
    fi
}

read -p "Enter a number: " number
sum=$(sum_digits $number)
echo "The sum of the digits is: $sum"
