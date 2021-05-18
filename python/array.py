#! /usr/bin/env python3
import array as ar
"""
a = ar. array('i',[4, 2, 5, 6])
for a in a:
 print(a)
 #array accesing
a = ar.array('i', [12, 11, 43, 56, 98])
for b in a :
 print(b) 
# Array  Slicing
ArrayName[start : stop : stride]
name = ar.array('d',[34, 67, 89, 99, 44, 54, 11, 45])
#y = name[1:4] ''' printing 1 to 3  '''
#y = name[1:]  '''  1 to end of array '''
#y = name[:3]
y = name[:-4]
print(y) 
"""
#processing arrays
name = ar.array('i',[34, 67, 89, 99, 44, 54, 11, 45])
name.append(30)
name.append(431)
print(name)


