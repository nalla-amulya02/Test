#!/bin/bash

echo " enter director name"
read newname
if [ -d $newname ]
then 
echo "the directory already exists"
else
`mkdir $newname`
fi
