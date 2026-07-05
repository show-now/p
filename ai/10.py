def find_max(list):
	max = list[0]
	
	for i in list:
		if max < i:
			max = i
	
	return max

list = [10, 40, 23, 43, 70, 60, 30]
result = find_max(list)
print("Maximum Num: ", result)
