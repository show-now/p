import random
import time
import matplotlib.pyplot as plt

def selection_sort(arr):
	for i in range(len(arr) - 1):
		min = i
		for j in range(i + 1, len(arr)):
			if arr[min] > arr[j]:
				min = j
		arr[min], arr[j] = arr[j], arr[min] 

arr_list = [100, 500, 1000, 2000, 5000]
time_list = []

for n in arr_list:
	arr = []
	for i in range(n):
		arr.append(random.randint(0, 1000))
	
	start = time.perf_counter()
	selection_sort(arr)
	end = time.perf_counter()
	
	time_list.append(end - start)

plt.plot(arr_list, time_list)
plt.xlabel("Array Size")
plt.ylabel("Time Taken")
plt.title("Selection Sort")
plt.show()
