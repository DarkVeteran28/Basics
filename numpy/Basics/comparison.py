import numpy as np

scores= np.array([91, 55, 100, 73, 82, 64])

# print(scores < 60)

scores[scores < 60] =0 # Filtering
print(scores)
 