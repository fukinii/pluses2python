import sys

# sys.path.append('./lib/')

import lib.PyPlusesToPython as cpp

import numpy as np

c = cpp.foo()

a = np.array([1., 1.])

print(c)