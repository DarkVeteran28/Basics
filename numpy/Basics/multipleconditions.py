import numpy as np

a = np.array([1,2,3,4,5])

conditions = [
    a < 2,
    (a >= 2) & (a < 4),
    a >= 4
]

choices = [
    "low",
    "medium",
    "high"
]

print(np.select(conditions, choices, default="Other"))
