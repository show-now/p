import time
import matplotlib.pyplot as plt

def binary_search(arr, x):
	left = 0
	right = len(arr) - 1
	
	while left <= right:
		mid = (left + right) // 2
		
		if arr[mid] == x:
			return mid
		elif arr[mid] > x:
			right = mid + 1
		else:
			left = mid - 1
	
	return -1
	
arr_list = [100, 500, 1000, 2000, 5000]
time_list = []

for n in arr_list:
	arr = []
	for i in range(n):
		arr.append(i)
	
	x = n // 2
	
	start = time.perf_counter()
	binary_search(arr, x)
	end = time.perf_counter()
	
	time_list.append(end - start)
	
print(arr_list)
plt.plot(arr_list, time_list)
plt.xlabel("Array Size")
plt.ylabel("Time Taken")
plt.title("Binary Search")
plt.show()
