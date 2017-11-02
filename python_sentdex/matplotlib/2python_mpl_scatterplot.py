#!python3
from matplotlib import pyplot as plt

x=[1,2,3,4]
y=[4,7,2,9]

x1=[10,3,6,7]
y1=[1,2,3,4]

x2=[3,2,9,10]
y2=[10,9,8,7]

plt.scatter(x,y)
plt.scatter(x1,y1)
plt.scatter(x2,y2)

plt.title('scatter plot')
plt.xlabel('X - axis')
plt.ylabel('Y - axis')

plt.show()
