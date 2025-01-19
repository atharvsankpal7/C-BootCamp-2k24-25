#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number --> ");
    scanf("%d", &num);

    // 1->num - 1
    int sum = 0;
    for(int i = 1;i < num; i++){
        //check if current number is factor of num or not
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num){
        printf("the number is a perfect number");
    }else{
        printf("the number is not a perfect number");
    }
    return 0;
}