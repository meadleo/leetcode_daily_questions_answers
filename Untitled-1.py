import numpy as np
import time

# Python 列表循环
lst = list(range(10000000))
start = time.time()
lst_squared = [x **2 for x in lst]
print(f"列表循环耗时：{time.time() - start:.4f} 秒")

# NumPy 向量化运算
arr = np.arange(100000000)
start = time.time()
arr_squared = arr** 2
print(f"NumPy 向量化耗时：{time.time() - start:.4f} 秒")
print("hello,world")