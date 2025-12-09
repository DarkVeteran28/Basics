import numpy as np


#basic operations
a=np.array([1,2,3])          #dtype inferred(int)              #All int, float,bool etc is inferred as dtype
b=np.array([1.0,2.0,3.0])    # float
c=np.arange(0,10,2)          # range
d=np.linspace(0,1,5)         #Evenly spaced
Z=np.zeroes((2,3))
O= np.ones((3,2), dtype=np.float32)
I=np.eye(3)                  #identity

#inspect
print("a:", a, "detype:", a.dtype, "shape:",a.shape, "ndim:", a.dim)
print("O.flags: ",O.flags)  #memory layout info
print("Z.strides:",Z.strides) #bytes to step in each
