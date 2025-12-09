import numpy as np

#Use a seed value to get same random result again and again
rng= np.random.default_rng(seed=1)

print(rng.integers(low=1, high=101, size=(3,2)))

# print(np.random.uniform())
# print(np.random.uniform(low=5 , high=100))
# print(np.random.uniform(low=5 , high=100, size=3))
# print(np.random.uniform(low=5 , high=100, size=(3,2)))

np.random.seed(seed=1)
print(np.random.uniform(low=5 , high=100, size=(3,2)))

