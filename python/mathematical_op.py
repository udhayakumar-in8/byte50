from numpy import *
"""
a = array([89, 33, 44, 23, 10, 9],int)
b = array([56, 23, 11, 89, 11],int)
c= a < b
print(c)
# relation operator in arrays
a = array([23, 3, 4, 2, 3, 11])
b = array([29, 4, 5, 3, 1, 78])
c = a > b
print("any one of the values is True", any(a))
print("if all the value is true", all(c))

# array attributes
# the ndim attribute  represents the number of dimensions
arr1 =array([1, 2, 3, 4, 5])
arr2 = array(
                [[2, 3, 5, 7],[5, 4, 5, 7,9]]
            )
# if array is 2, 3 matrix (or) 3, 2
print(arr1.ndim)
print(arr2.ndim)
#shape attributes giving a shape of an array
print(arr1.shape)
print(arr2.shape)
#finding the item size 
print(arr1.itemsize)
print(arr2.itemsize)
# reshape an array
arr2 = arr2.reshape(5,2)
print(arr2)
"""
# reshape array
arr1 = arange(10)
#print(arr1)
#arr1 = array( [[10, 11, 12, 13, 14], [15, 16, 17, 18,43] ])
#arr1 = arr1.reshape(2, 5)
#print(arr1)
#flaten the array
print(arr1.flatten())
