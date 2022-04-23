#!/bin/bash

string=$*
echo " enter pattern"
read pattern

if [[ $string == $pattern ]]
then echo "matched"
fi
