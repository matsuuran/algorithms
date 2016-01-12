#include <stdio.h>

void selectsort(int* array, int n){
	for(int i=0; i<n; i++){
		int lowest = array[i];
		int lowest_index = i;

		for(int j=i; j<n; j++){
			if(array[j] < lowest){
				lowest = array[j];
				lowest_index = j;
			}
		}

		array[lowest_index] = array[i];
		array[i] = lowest;
	}

	return;
}


int main(){
		int array[50] = {73, 65, 17, 49, 94, 99, 25, 76, 77, 38, 
									   84, 15, 48, 62, 80, 63, 23, 44, 87, 96, 
									   2 , 27, 33, 35, 57, 83, 83, 58, 39, 71, 
									   97, 92, 72, 60, 70, 37, 5 , 29, 45, 28, 
									   3 , 81, 10, 22, 53, 40, 51, 91, 74, 21};

  int n = sizeof(array) / sizeof(int);

	selectsort(array, n);

	//print
	for(int i=0; i<50; i++){
		printf("%d ", array[i]);
	}
}