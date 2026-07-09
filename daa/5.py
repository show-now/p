def find_min_max(arr, low, high):
	if low == high:
		return arr[low], arr[high]
	
	if high == low + 1:
		if arr[low] < arr[high]:
			return arr[low], arr[high]
		else:
			return arr[high], arr[low]
	
	mid = (low + high) // 2
	
	min1, max1 = find_min_max(arr, low, mid)
	min2, max2 = find_min_max(arr, mid + 1, high)
	
	minimum = min(min1, min2)
	maximum = max(max1, max2)

	return minimum, maximum

arr = [29, 47, 84, 37, 578, 23, 2]
minimum, maximum = find_min_max(arr, 0, len(arr) - 1)
print("Minimum: ", minimum)
print("Maximum: ", maximum)
