dict = {'name':'peter','Id':20340,'Salery':89435,'Name':'hollowin'}
n = len(dict)
"""
print("n value",n)
print(dict['Name'])
print(dict['Id'])
d1 = {'name':'nothing'}
d1 = dict.copy()
print(d1)
print('*' * 12)

k = input()
v = 'no found'
print("dictionary-key:", dict.keys())
print("docitionary-value: ",dict.values())
print("particular key-value :",dict.get(k,v))
i = input("Enter the bname")
v = input()
dict.update({i:v})
print(dict)
"""
colors = {'R':"Red", 'G':"green", 'B':"Blue"}
for x,y in colors.items() :
    print("key :{:<} values: {:>}".format(x, y))
