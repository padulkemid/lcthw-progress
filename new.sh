#!/bin/bash

# cp the make file inside `ex10` that already has all the flags created

if [[ -n $1 ]]; then
  mkdir $1
  cp ./ex10/Makefile ./$1
  sed -i -e "s/ex10/$1/g" ./$1/Makefile
  touch ./$1/$1.c

  exit 0
fi

printf "dumb, provide an ARG!\n"
exit 1


