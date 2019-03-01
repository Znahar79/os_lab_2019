#!/bin/bash


for c in {1..150}
do
    od -vAn -N1  -tu2 < /dev/random  >> numbers.txt
done