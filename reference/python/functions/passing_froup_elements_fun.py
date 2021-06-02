#! /usr/bin/env python3
""" if you  are passing mulitple value from  the function
    take as list senda list as a function its accepting the arguments"""
def pass_fun(arg1) :
    n = len(arg1)
    for i in arg1: 
     print(i)
arg1 = [int(x) for x in input().split()]
pass_fun(arg1)

