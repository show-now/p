def tower_of_hanoi(n, src, tar, aux):
	if n == 1:
		print(f"Moving disk from {src} to {tar}")
		return
	
	tower_of_hanoi(n - 1, src, aux, tar)
	print(f"Moving disk from {src} to {tar}")
	tower_of_hanoi(n - 1, aux, tar, src)
	
num = int(input("Enter number of disk: "))
tower_of_hanoi(num, 'A', 'C', 'B')
