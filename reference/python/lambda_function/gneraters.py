#! /usr/bin/env python3
#gnerating random number 
def mygen (x,y) :
    while x <= y :
        yield x
        x= x+1

print("main thread executing")
for i in  mygen(5,10) :
    print("i value",i)
#using next function to fetching value
print(next(mygen(5,10)))
print(next(mygen(5,10)))
print(next(mygen(5,10)))