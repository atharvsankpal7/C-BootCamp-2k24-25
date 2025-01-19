#include<stdio.h>
int main(){
	// ✅input the size and array
	// ✅iterate over each element
	// find the next greater element 
	//   --> ✅1. iterate over next elements
	//  	 ✅2. check if curr element  is greater than the ith element
	// 		 ✅3. if yes then sol[i] = curr element and break

	int n;
	printf("enter the size of array --> ");
	scanf("%d", &n);

	int arr[n];
	int sol[n];

	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	// iterate 
	for (int i = 0; i < n; i++)
	{
		sol[i] = -1;
		// find the next greater element
		for(int j = i + 1; j < n; j++){
			// check if curr element is greater than ith
			if(arr[i] < arr[j]){
				sol[i] = arr[j];
				break;
			}
		}
	}
	// print the final array
	printf("\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", sol[i]);
	}

	return 0;
}