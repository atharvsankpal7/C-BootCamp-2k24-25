#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // finding the largest element in the array
    int largestE = 0;
    for(int i = 0;i < size; i++){
        // check if current element is greater than the largest element
        if(arr[i] > largestE){
            largestE = arr[i];
        }
    }
    // finding the second largest element in the array
    int secondLargestE = 0;
    for(int i = 0;i < size; i++){
        // check if current element is second largest
        //  1. if current element is greater than the second largest element
        //  2. current element is not equal to the largest element
        if(arr[i] > secondLargestE && arr[i] != largestE){
            secondLargestE = arr[i];
        }
    }

    if(secondLargestE == 0){
        printf("%d \n", -1);
    }else{
        printf("%d \n", secondLargestE);
    }
        

    return 0;
}