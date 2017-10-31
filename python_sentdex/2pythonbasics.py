#!python3

print('This is python basics2')

#functions
def func1():
    print('This is the first trial function')

func1()

#function 2
def func2(par1,par2):
    par3 = par1 + par2
    print('Parameter 3 value is:',par3)

func2(3,4)

#function 3 with global variables
x = 3
def func3():
    global x
    print('The value of global variable x is:',x)
    y = 'awesome place'
    return y

y = func3()
print(y)
