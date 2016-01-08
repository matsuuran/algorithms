#include <stdio.h>
#include <stdlib.h>


void merge(int* array, int size, int mid){

  int *x = (int*) malloc(size * sizeof (int));
  
  int left = 0;
  int right = mid;

  for (int i=0; i<size; i++) {
    x[i] = right == size      		 			? array[left++]
         : left  == mid      			 			? array[right++]
         : array[left] < array[right]  	? array[left++]
         :               				 					array[right++];
  }

  for (int i = 0; i < size; i++) {
      array[i] = x[i];
  }

  free(x);
}

void merge_sort(int* array, int size){
	if(size < 2)
		return;

	else {
		int mid = size / 2;
		merge_sort(array, mid);
		merge_sort(array+mid, size-mid);
		merge(array, size, mid);
	}
}


int main(){
	int array[50] = {73, 65, 17, 49, 94, 99, 25, 76, 77, 38, 
									 84, 15, 48, 62, 80, 63, 23, 44, 87, 96, 
									 2, 27, 33, 35, 57, 89, 83, 58, 39, 71, 
									 97, 92, 72, 60, 70, 37, 5, 29, 45, 28, 
									 3, 81, 10, 22, 53, 40, 51, 91, 74, 21};

	merge_sort(array, 50);

	//print
	for(int i=0; i<50; i++){
		printf("%d ", array[i]);
	}
	
	return 0;
}