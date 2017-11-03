#!python3

#text = open('exfile1.txt','r').read()

#print(text)

textlist = open('exfile1.txt','r').readlines()
for i in textlist:
    print(i)
