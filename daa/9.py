def boyer_moore(text, pattern):
	n = len(text)
	m = len(pattern)
	
	for i in range(n - m + 1):
		j = m - 1
		
		while m >= 0 and pattern[j] == text[i + j]:
			j -= 1
			
		if j == -1:
			print("Pattern found at ", i)
			return
			
	print("Pattern not found")
	
boyer_moore("ABAAABCD", "ABC")
