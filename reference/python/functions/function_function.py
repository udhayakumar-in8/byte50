#! /usr/bin/env python3
"""
def display(str) :
    def message():
        return "hello,"
    result = message()+str
    return result

x = input("Enter the string:")
print(display(x))

# passing address to another function
def display(str) :
    return "hai,"+ str
def message():
  return "how are you"
print(display(message()))
"""
# function returning a another function
def bell() :
    def benchmark() :
        return "hello mark"
    return benchmark
print("This main program")
#call the function
nomatic = bell()
print(nomatic())