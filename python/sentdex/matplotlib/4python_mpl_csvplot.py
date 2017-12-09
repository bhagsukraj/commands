#!python3
from matplotlib import pyplot as plt
import numpy as np

x,y = np.loadtxt("4python_sample.txt",
                 unpack = True,
                 delimiter = ',')

plt.plot(x,y)
plt.show()

print(x,y)
