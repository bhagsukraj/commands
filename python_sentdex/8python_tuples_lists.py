#!python3
x = (4,5,6,7,8)

y = [3,4,4,5,6,7]
print(x)
print(y)

print(x[0],x[1],x[2])
print(y[0],y[1],y[2])

y.append(100)
y.append(200)
print(y)

y.remove(4)
print(y)
#print lists by index.
print(y[1:4])
#prrint list from the other side
print(y[1:-2])
#to print the index fo a list variable
print(y.index(6))
#count no of list variables
print(y)
print(y.count(4))
#sort list variables
y.sort()
print(y)

#python multi line prrint
print('''
Hello world
How are you doingg
I am fascinated with this new world
''')

#dictionary

dict1 = {'name':'ravi' , 'age':34, 'native':'andhra'}
print(dict1)
print(dict1['name'])
print(dict1['age'])
dict1['edu'] = 'btech'
print(dict1)

del dict1['name']
print(dict1)
