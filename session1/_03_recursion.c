#include<stdio.h>

void printTable(int n, int i){
	if(i > 10){ // base condition
		return;
	}
	printf("%d\n", n * i);
	i = i + 1; // increment
	printTable(n, i);
}

int main(){
	int n;
	printf("Enter the number --> " );
	scanf("%d", &n);
	printTable(n, 1); // initialize
	return 0;
}