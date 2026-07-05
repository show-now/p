import random

def hill(arr, restart=5):
	best = float("-inf")
	
	for i in range(restart):
		current = random.randint(0, len(arr) - 1)
		
		while True:
			next = current
			
			if current > 0 and arr[current - 1] > arr[next]:
				next = current - 1
			
			if current < len(arr) - 1 and arr[current + 1] > arr[next]:
				next = current + 1
				
			if current == next:
				break
			
			current = next
			
		if arr[current] > best:
			best = arr[current]
			
	return best

list = [10, 20, 50, 60, 30]
print("Peak: ", hill(list))
