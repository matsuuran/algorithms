from random import randint

def swap(arr, i, j):
	temp = arr[i]
	arr[i] = arr[j]
	arr[j] = temp

def rquicksort (arr):
	length = len(arr)

	if(length < 2):
		return arr

	else:
		pivot = randint(0,length-1)

		swap(arr, pivot, 0)
		pivot = arr.pop(0)

		low = []
		high = []

		for i in range(0, length):
			if(i < pivot):
				low.append(arr[i])
			else:
				high.append(arr(i))

		low = rquicksort(low)
		high = rquicksort(high)

		low.append(pivot)

		return low + high
