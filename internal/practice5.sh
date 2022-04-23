#!/bin/bash

echo "enter a number"
read number
case $number in
1)
echo "first rank";;
2)
echo "second rank";;
3)
echo "third rank";;
*)
echo "u r not in top 3";;

esac
