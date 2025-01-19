#include<stdio.h>
int main(){
	

	// printf("%d\n", arr[0]);
	// printf("%d\n", arr[1]);
	// printf("%d\n", arr[2]);
	// printf("%d\n", arr[3]);
	// for loop -->
		// initialization
		// int a = 1;
		// int x = 10;
		// int y = -30;

		// condition --> where to end
		// if(< > >= <= == != )

		// updation --> after on iteration what value to update

		// for(initialize; condition; updation){
		// 	// code here
		// }

		// for(int i = 0; i < 4; i++){
		// 	printf("%d", arr[i]);
		// }
		// repeats the code inside until the condition is false
	// int arr[] = {1, 2, 3, 4, 5, 6 ,7, 8 , 10};
	// int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
	// for(int i = 0; i < sizeOfArray; i++){
	// 		printf("%d\t", arr[i]);
	// }

	// int n;
	// printf("enter the number -->");
	// scanf("%d", &n);
	// for(int i = 0; i <= n;i++){
	// 	printf("%d", i);
	// }

	// for(int i = n; i > 0; i--){
	// 	printf("%d\t", i);
	// }
	// // 1-->n


	// for(intialize; condition; updation)
	// while(condition){
	// 	// code hhere 
	// }

	// int n;
	// printf("enter the number -->");
	// scanf("%d", &n);
	// int i = 0;
	// while(i <= n){
	// 	printf("%d", i);
	// 	i++;
	// }

	char str[] = {'a', 'b', 'c', 'd', '\0'};
	
	int i = 0;
	while(str[i] != '\0'){
		printf("%c\t", str[i]);
		i++;
	}

}