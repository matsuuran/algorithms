def swap(arr, i, j):
	temp = arr[i]
	arr[i] = arr[j]
	arr[j] = temp

def insertsort(arr):
	for i in range(1, len(arr)):
		for j in range(i-1, -1, -1):
			if(arr[j+1] < arr[j]):
				swap(arr, j+1, j)
	return arr

