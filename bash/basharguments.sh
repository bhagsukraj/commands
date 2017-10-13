#!/bin/bash

#passing arguments to the bash script

var1=$1
var2=$2
var3=$3

echo $var1 $var2 $var3

if [ $var1 = "ravi" ] ; then
  echo "awesome this thing works"
elif [ $var1 = "kiran" ] ; then
  echo "first elif"
else
  echo "else statement"
fi

exit
