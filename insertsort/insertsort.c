#include <stdio.h>

void insertsort(int* array){
	for(int i=0; i<50; i++){
		for(int j=i; j>=0; j--){
			if(array[j+1] < array[j]){
				int temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	}
	return;
}


int main(){
	int array[50] = {73, 65, 17, 49, 94, 99, 25, 76, 77, 38, 
									 84, 15, 48, 62, 80, 63, 23, 44, 87, 96, 
									 2, 27, 33, 35, 57, 89, 83, 58, 39, 71, 
									 97, 92, 72, 60, 70, 37, 5, 29, 45, 28, 
									 3, 81, 10, 22, 53, 40, 51, 91, 74, 21};

	insertsort(array);

	//print
	for(int i=0; i<50; i++){
		printf("%d ", array[i]);
	}
	
	return 0;
}