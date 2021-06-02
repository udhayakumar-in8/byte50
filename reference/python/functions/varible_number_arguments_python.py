#! /usr/bin/env python3
#positonal arguments in python
"""in positional arguments in python how any arguments
 you are passing in python same as to receive the function also same like c"""
#keyword arguments in python
"""in keyword arguments same like positional arguments but
   key diffrence is pass the arguments any order (but keyword shoud be match )
            ex:name,product,price"""
"""
def function(name, product, price):
    print("name is :%s" % name)
    print("product is %s" % product)
    print("price %.2f" % price)

function(name = 'udhaya' ,product = "nomatic" ,price = 990.45)
function(name = 'peter',price = 784.234, product = 'nomatic-camer_bag')

#default arguments
print("default argument printing")
def default_argument(name, price=443.1) :
    print("name",name)
    print("print%.2f",price)

#function calling from argument
default_argument(name = "peter", price = 243)
default_argument(name = "udhaya")
"""
# variable number of argument 
print("-------variable  argument printing------")
def va_argument(name, *varg) :
    print("name",name)
    for i in varg :
       print(i)
    print("variable argument completed")

print("keyword varibale argument")
def vakey_argument(narg, **keyvarg):
      print("normal argument", narg)
      for x ,y in keyvarg.items():
         print("argumeny is {:>7} 2nd argument is{:>10}".format(x,y))

#function calling from argument
va_argument("peter",243)
va_argument("udhaya",10,11,12,12)
#function call the keyword varible argument
vakey_argument(10,ref=1,name ="peter")
vakey_argument(20,ref=2,name ="nomatic")