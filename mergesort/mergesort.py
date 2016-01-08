def split(arr):
	left = arr[:len(arr)/2]
	right = arr[len(arr)/2:]
	return left, right


def merge(left, right):
	arr = []

	while((len(left)>0) and (len(right)>0)):
		if(left[0] < right[0]):
			arr.append(left.pop(0))
		else:
			arr.append(right.pop(0))

	if(len(left) > 0):
		arr = arr + left

	if(len(right) > 0):
		arr = arr + right

	return arr


def mergesort(arr):
	length = len(arr)

	if(length <= 1):
		return arr

	else:		
		left, right = split(arr)
		left = mergesort(left)
		right = mergesort(right)
		return merge(left, right)