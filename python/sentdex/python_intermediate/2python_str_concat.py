#!python3
list1 = ['apple','mango','grape','dragon fruit']

print(', '.join(list1))

for i in list1:
    print('Fruit name is : ' + i)
    print(' '.join(['Fruit name is :',i]))
