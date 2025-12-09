import numpy as np

arr= np.arange(12).reshape(3,4)
print(arr)
sub=arr[0:2,1:3]        #slicing -> often a view
sub[0,0]=999
print("arr after sub moditification:\n", arr)

#fancy indexing (list/ndarray of indices) -> produces a copy
fancy=arr[[0,2], [1,3]]
print("fancy:", fancy,"fancy.base is arr?", fancy.base is arr)

#verify view vs copy
print("sub.base is arr?", sub.base is arr)