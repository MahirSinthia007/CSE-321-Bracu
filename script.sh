#!/bin/bash

#ls
#ls -l
#echo "Hello, World"

#echo "Enter a number: "
#read num

#echo "The number is $num"

#var1=lab1
#var2=$((1+2))

#echo "First variable $var1"
#echo "Second Variable $var2"

#echo -n "Enter First Number"
#read num1

#echo -n "Enter Second NUmber"
#read num2

#var1=$(($num1+$num2))
#echo $var1

#if [ $num1 -gt $num2 ]; then 
#echo "$num1 is greater than $num2"
#elif [ $num1 -lt $num2 ]; then 
#echo "$num1 is less than $num2"

#else
#echo "Both are equal"
#fi

#for i in  $*
#do
#echo $i
#done

#echo "Total arguments : $# "

#echo "Third argument: $3 "

#for (( i=1; i<=50; i++))
#do
#echo $i
#done

foo(){

for i in $*
do
echo $i
done


 echo "The function is running"
}

echo "The function is called"
foo e f g h

for i in $*
do
echo $i
done









  


