#! /usr/bin/env python3
"""
str = " hello python"
print("string is :\a",str)
# repeating the strings in python
str = 'core python'
n = len(str)
i = 0
while i < n :
  print(str[i], end=" ")
  i += 1
print()

str = " core python "
n = len (str)
i = -1
while i >= -n :
    print(str[i], end= " ")
    i -=1

s = " python programming "
for i in s[ : : -1] :
    print(i, end = ' ')
# printing particalr position onwords
str = 'core python'
print( str[3 : 7] * 3)

# finding the string and substring
str = input("Enter the main string :")
sub = input("Enter the substring : ")
n = len(str)
if sub in str :
    print("Substring is present in the main string")
    print("toatal sub string count is ",str.count(sub))
else :
    print("substring not found")

# finding the substring from position
string = "string founded the some position"
sub = "some"
print("string found on :",(string.index(sub,0,len(string)))+1)

#string replacing char is not possible
str = "string replacing char is not possible"
print(str[3])
str[3] = 'R'

# replacing the string
string1 = "first string is i want made a boy there"
st1 = "made"
st2 = "make"
string_Repl = string1.replace(st1,st2)
print(string_Repl)

str = input("Enter the input seperate by comma',':")
str1 = str.split(',')
print(str1)

str2 = input("Enter the string seperate by space' ':")
str2 = str2.split(' ')
print(str2)

string = "one two three"
string = list (string.split(' '))
sep = "-"
res = sep.join(string)
print(res)

#converting upper to lower / lower to upper
str1 = 'python is the future'
print(str1.upper())

print(str1.endswith("future"))

string1 = "modi he jamara ha"
print(string1.isalpha())

#print using .format() method
id = 201
name = "how ever"
salery = "30,371"
strdotformat ='name = {} id = {} salery = {}'.format(id, name, salery)
print(strdotformat)
#printing the alignments
num = 5000
#'<' and '>' '^' - left,right and justify based on ouput
print('{:<15d}'.format(num))
"""
# taking empty array
str = []
n = int(input("How many string you are entered :"))
for i in range(n) :
    str.append(input("Enter the string: "))
str1 = sorted(str)
for i in str1:
  print(i)
