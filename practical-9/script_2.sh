#!/bin/bash

# Ask user for directory name
echo "Enter the directory name to create:"
read dir_name

# Create the directory
mkdir $dir_name

# Navigate into the directory
cd $dir_name

# Display the current directory
echo "You are now in the directory: $(pwd)"
