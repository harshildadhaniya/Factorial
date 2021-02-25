#include <stdio.h>
#include <math.h>

int factorial(int i){

    if (i==0){
        return 1;
    }
    else if (i > 0)
    {
        return i*factorial(i-1);
        /* Alternate Method
        int res = 1;
        for (int j = i; j >= 2; j--) {
            res *= j;
        }
        return res;*/
    }
    else{
        return -1;
    }
}

int main(){
    int num;
    printf("Enter a number to calculate the factorial: ");
    scanf("%d", &num);
    int ans = factorial(num);

    if (ans == -1){
        printf("You have entered an invalid number \n");
    }
    else{
        printf("Factorial of %d is %d \n", num, ans);
    }

    return 1;
}