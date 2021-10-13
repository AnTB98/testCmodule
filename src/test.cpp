#include <iostream>

void print_array(int array[],int size){
	// Print the content of an array
	for(int i=0;i<size;i++)
		std::cout<<array[i]<<" ";
	return;
}

int* sort_array(int array[],int size){
	// Sort and return an array from small to large
	int i,i2,currentmin,temp;
	for(i=0;i<size;i++){
		currentmin=array[i];
		for(i2=i;i2<size;i2++){
			if(currentmin>array[i2]){
				temp=currentmin;
				currentmin=array[i2];
				array[i]=currentmin;
				array[i2]=temp;
			}
		}
	}
	return array;
}

int* get_large_nums(int array[], int desti[],int size,int inputnum){
	// Get the n number of large integer based on the user's input
	for(int i=0, i2=size-1;i<inputnum;i++,i2--)
		desti[i]=array[i2];
	return desti;
}
