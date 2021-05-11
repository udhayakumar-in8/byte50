#! /usr/bin/env python3
import argparse
#creating object
parse = argparse.ArgumentParser()
#adding to argument parser with entering argumnt  limit =2
parse.add_argument('nums',type = int , nargs = '*')
# fetching the parguments
arguments = parse.parse_args()
#printing the receing the values
print("sqre = ", arguments.nums[0])
print("pow  = ",  arguments.nums[1])
 # parse.nums[1] taking numbrt from that object
result = arguments.nums[0] ** arguments.nums[1]
print(result)

 
