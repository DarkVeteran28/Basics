import numpy as np

array=np.array([[['A','B','C'],['D','E','F'],['I','J','K']],
                [['A','B','C'],['D','E','F'],['I','J','K']],
                [['Š','B','C'],['D','E','F'],['I','J',' ']] ])

print(array.ndim) # number of dimensions in array
print(array.shape)
print(array[0][0][0]) #chain indexing ("common way")(Slower)
print(array[2, 1, 0]) # "Numpy special" (Multi-dimensional indexing)

word= array[0, 0, 0] + array[2,0,0] + array[2,0,0]

print(word) # String Concatenation