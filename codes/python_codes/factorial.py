# -*- coding: utf-8 -*-
"""
Created on Fri Jun  5 17:56:31 2020

@author: ankit
this function calculates factorial
"""
def fact(n):
    if(n<2):
        return 1
    else:
        return n*fact(n-1)


print("Enter the number for factorial:")
n=int(input())
print("Factorial of ",n," is: ",fact(n))

