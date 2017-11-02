#!python3
from matplotlib import pyplot as plt

x=[1,2,3,4]
y=[4,5,6,7]

x1=[3,2,5,6]
y1=[4,7,2,10]

x2=[5,4,3,7]
y2=[2,9,10,4]
print(x)
print(y)

plt.plot(x,y)
plt.plot(x1,y1,linewidth=5,label='x1y1')
plt.plot(x2,y2,label='x1y2')

plt.title('plot')
plt.xlabel('x - axis')
plt.ylabel('y - axis')
plt.legend()

plt.show()
