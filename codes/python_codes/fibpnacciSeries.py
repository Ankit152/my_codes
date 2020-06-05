# -*- coding: utf-8 -*-
"""
Created on Fri Jun  5 18:04:15 2020

@author: ankit
FIBONACCI SERIES: 0 1 1 2 3 5 8 13....
"""
print("Enter the number of fibonacci numbers needed")
n=int(input())
a=0
b=1
c=0
print("The required fibonacci series is: ")
for i in range (1,n+1):
    print(c,end=" ")
    a=b
    b=c
    c=a+b


