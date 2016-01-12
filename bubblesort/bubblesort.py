def bubblesort(arr):
	length = len(arr)

	for i in range(0, length):
		for j in range(0, length-(i+1)):
			curr = arr[j]
			next = arr[j+1]

			if(curr > next):
				arr[j] = next
				arr[j+1] = curr
	return arr