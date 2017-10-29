#!python3
'''
comments
'''
import sys
import time
print ('Hello world')
print (sys.version)
print ('HI'+str(5))
print(12/5)
print(13/5)
print(12*3)
#unpacking variables
var = 1
print('variable',var)
x,y = (3,5)
print('x','y',x,y)
#while loop
i = 1
while(i<5):
    print('Hello')
    i+=1
#for loop
list1 = [ 1 , 100 ,200 , 300, 400]
for i in list1 :
    print (i)
#range function
for i in range(1,5):
    print('range',i)
