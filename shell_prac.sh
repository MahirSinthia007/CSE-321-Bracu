#!/bin/bash

my_array=("apple" "banana" "cherry")

for f  in ${my_array[@]}
do 
echo "$f"
done



for ((i=0;i<=50;i=i+2))
do
echo $i
done


echo "Enter your number: "
read num
if [ $num -lt 5 ]; then
echo "Why so small"
fi