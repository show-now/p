magic_square = [
    [8, 1, 6],
    [3, 5, 7],
    [4, 9, 2]
]


def validate(magic_square, magic_sum):
	
	for row in magic_square:
		if sum(row) != magic_sum:
			return False
	
	for col in range(3):
		if magic_square[0][col] + magic_square[1][col] + magic_square[2][col] != magic_sum:
			return False
			
	if magic_square[0][0] + magic_square[1][1] + magic_square[2][2] != magic_sum:
		return False
		
	if magic_square[0][2] + magic_square[1][1] + magic_square[2][0] != magic_sum:
		return False
	
	return True

magic_sum = 15

if validate(magic_square, magic_sum):
	print("Vaild magic square")
else:
	print("Invalid magic square")
