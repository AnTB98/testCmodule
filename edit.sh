#! /bin/bash

if [[ ${1} -eq 1 ]]
then
	vim src/include/test.h
else
	vim src/${1}.cpp
fi
