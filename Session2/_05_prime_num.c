#include <stdio.h>
int main()
{
    // input the number
    int num;
    printf("Enter the number -->");
    scanf("%d", &num);

    int count = 0;
    // 1 -> num
    for(int i = 1;i <= num; i++){
        // to check if the current number is factor of `num`
        if(num % i == 0){ 
            count++;
        }
    }
    if(count > 2){
        printf("the number is not a prime number");
    }else{
        printf("the number is a prime number");
    }
    return 0;
}