#! /usr/bin/env python3
#recursive functions
def recursive_function(lst) :
     if lst == 0 :
         return 1
     else :
        result = lst* recursive_function(lst -1)
     return result
print("factorial function")
res=recursive_function(5)
print(res)
       