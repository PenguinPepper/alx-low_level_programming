#!/usr/bin/env bash
# Bash script that creates a directory and a readme for the directory
mkdir "$1" && cd "$1" || exit
echo "# $2\n"> README.md
echo "This directory contains the files for ALX project $2">>README.md
cd "$1" vim "$3"
