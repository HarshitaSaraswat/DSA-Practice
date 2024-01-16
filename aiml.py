import numpy as np
from scipy import stats

dataset = [23, 45, 67, 12, 56, 34, 23, 67, 89, 12, 23]

mean = np.mean(dataset)
median = np.median(dataset)
mode = stats.mode(dataset)
variance = np.var(dataset)

std_deviation = np.std(dataset)

print(f"Dataset: {dataset}")
print(f"Mean: {mean}")
print(f"Median: {median}")
print(f"Mode: {mode}")
print(f"Variance: {variance}")
print(f"Standard Deviation: {std_deviation}")
