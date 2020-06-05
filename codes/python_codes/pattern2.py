# -*- coding: utf-8 -*-
"""
Created on Fri Jun  5 17:42:25 2020

@author: ankit
"""
print("Enter the number: ")
n=int(input())
for i in range (n,0,-1):
    for j in range (1,i+1):
        print(j,end=' ')
    print('\n')

        