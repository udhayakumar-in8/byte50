#! /usr/bin/env python3
""" in tuples is immutable datatype so we could't modify 
                       it but we can delete and merge using external object """
tup = (1, 6, 4, 7, 3)
b = (3, 67, 43, 12.4, 56)
#res = b + tup[3:]
#print(res) 
#inserting data using tuples
k = 45,23
m = tup[0:3] +k[:1]
c = m+b
print(c)

