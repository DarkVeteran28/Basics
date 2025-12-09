import numpy as np


#Broadcasting allows numpy to perform operations on arrays
#with diff shapes by virtually expanding dimensions
# so they match the larger array's shape

#COnditions
#The dimensions have the same sizes
#or
#One of the dimensions has a size of 1

array1=np.array([[1,2,3,4],
                 [5,6,7,8],
                 [5,6,7,8],
                 [5,6,7,8]])
array2=np.array([[1,2,11,11],[2,4,1,1],[3,6,1,1],[4,7,2,3]])

print(array1.shape)
print(array2.shape)

print(array1 * array2)



