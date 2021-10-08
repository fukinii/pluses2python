import sys

# sys.path.append('./lib/')

import lib.PyPlusesToPython as pluses2python

import numpy as np

arg = np.array([10., 20., 30.], dtype=np.float64)

c = pluses2python.foo(arg)
print(c)

a = pluses2python.add(i=1., j=90.)

print(a)
