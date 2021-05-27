#!/usr/bin/env python3
''' import sys
n = len(sys.argv)
arguments = sys.argv
for a in arguments:
 print(a) '''
 # command line arguemnts arguments parser
"""
import sys
a =sys.argv[1:]
for args in a :
 print(args)
"""
#argument parser
import argparse
#create object for argument parser
parser = argparse.ArgumentParser()
# adding arguments to parser
parser.add_argument("num",type=int,help="Please Enter The INTEGER Number")
args = parser.parse_args()
''' here "args" repersents an object of "namespace" class of argsparse module.
    the acutal argument availablein object with the name "num" and henece it can be 
    refered as args.num '''
print (args.num)
