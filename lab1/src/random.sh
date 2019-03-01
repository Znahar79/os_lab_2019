#!/bin/bash


for c in {1..150}
do
   echo "$((1 + RANDOM % 100)) " >> numbers.txt
done