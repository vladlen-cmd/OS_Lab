#!/bin/bash

# Ask user for the source and backup directories
echo "Enter the source directory:"
read source_dir

echo "Enter the backup directory:"
read backup_dir

# Create backup directory if it doesn't exist
mkdir -p $backup_dir

# Copy files from source to backup
cp -r $source_dir/* $backup_dir

echo "Backup completed successfully."
