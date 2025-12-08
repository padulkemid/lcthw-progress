#!/bin/bash

# cp the make file inside `ex10` that already has all the flags created
# and in this script it will actually make the file easier so I don't manipulate
# manually for Makefile and the actual .c file
# I think while learning c, I could make this in c why I make it in shell
# script, idk...
if [[ -n $1 ]]; then
  mkdir $1
  cp ./ex10/Makefile ./$1
  sed -i -e "s/ex10/$1/g" ./$1/Makefile
  touch ./$1/$1.c

  exit 0
fi

printf "dumb, provide an ARG!\n"
exit 1


