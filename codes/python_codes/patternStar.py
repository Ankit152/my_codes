# -*- coding: utf-8 -*-
"""
Created on Fri Jun  5 17:46:05 2020

@author: ankit

this program is to make * traingle
"""
print("Enter the number: ")
n=int(input())
print("The required * trinagle is\n")
for i in range (1,n+1):
    for j in range (n,0,-1):
        if(j>i):
            print(" ",end=" ")
        else:
            print(" * ",end=" ")
    print('\n')
    