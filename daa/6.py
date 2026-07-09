import random
import time
import matplotlib.pyplot as plt

def quick(arr):
	if len(arr) <= 1:
		return arr
	
	pivot = arr[len(arr) // 2]
	
	left = [x for x in arr if x < pivot]
	middle = [x for x in arr if x == pivot]
	right = [x for x in arr if x > pivot]
	
	return quick(left) + middle + quick(right)

arr_list = [100, 500, 1000, 2000, 5000]
time_list = []

for n in arr_list:
	arr = []
	for i in range(n):
		arr.append(random.randint(0, 1000))
		
	start = time.perf_counter()
	quick(arr)
	end = time.perf_counter()
	
	time_list.append(end - start)

plt.plot(arr_list, time_list)
plt.xlabel("Array size")
plt.ylabel("Time taken")
plt.title("Quick Sort")
plt.show()
