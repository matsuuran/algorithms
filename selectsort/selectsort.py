def selectsort(arr):
	for i in range(0, len(arr)):
		lowest = arr[i]
		lowest_index = i

		for j in range(i, len(arr)):
			if(arr[j] < lowest):
				lowest = arr[j]
				lowest_index = j

		temp = arr[i]
		arr[i] = arr[lowest_index]
		arr[lowest_index] = temp
		
	return arr