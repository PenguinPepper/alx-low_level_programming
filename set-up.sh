#!/usr/env/bash
# Bash script that creates a directory and a readme for the directory
mkdir $1 && cd $1
echo "$2"> README.md
echo "This directory contains the files for ALX project $2">>README.md
vim $3
