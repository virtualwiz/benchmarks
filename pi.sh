#!/bin/bash

#read -p "scale?" checking
#num=${checking:-"10"}
time echo "scale=10000; 4*a(1)" |bc -lq
