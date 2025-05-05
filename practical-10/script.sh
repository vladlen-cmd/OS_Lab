#!/bin/bash

# Asking user to input a number
echo "Enter a number:"
read num

# Checking the number using if-else conditional
if [ $num -gt 0 ]; then
    echo "The number is positive."
elif [ $num -lt 0 ]; then
    echo "The number is negative."
else
    echo "The number is zero."
fi
