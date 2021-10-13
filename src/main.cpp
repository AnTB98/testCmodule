#include <iostream>
#include "include/test.h"

int main(){

	int inputnum;
	std::cout<<"How many number do you want to find: ";
	std::cin>>inputnum;
	int array[]={5,4,9,13,8,7,12,9,15,19,32,70,56};
	int arsize,*sortedarray,gotnums[inputnum],*finalarray;
	arsize=sizeof(array)/sizeof(array[0]);

	print_array(array,arsize);
	std::cout<<"(Original Array)"<<std::endl;

	sortedarray=sort_array(array,arsize);
	print_array(sortedarray,arsize);
	std::cout<<"(Sorted Array)"<<std::endl;

	finalarray=get_large_nums(array,gotnums,arsize,inputnum);
	std::cout<<inputnum<<" largest elements are: ";
	print_array(finalarray,inputnum);
	std::cout<<"\n";

	return 0;
}
