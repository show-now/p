import time
import matplotlib.pyplot as plt

def linear_search(arr, x):
	for i in range(len(arr)):
		if arr[i] == x:
			return i
	return -1
	
arr_list = [100, 500, 1000, 2000, 5000]
time_list = []

for n in arr_list:
	arr = []
	for i in range(n):
		arr.append(i)
	
	x = n // 2
	
	start = time.perf_counter()
	linear_search(arr, x)
	end = time.perf_counter()
	
	time_list.append(end - start)

print(arr_list)
plt.plot(arr_list, time_list)
plt.xlabel("Array Size")
plt.ylabel("Time Taken")
plt.title("Linear Search")
plt.show()
