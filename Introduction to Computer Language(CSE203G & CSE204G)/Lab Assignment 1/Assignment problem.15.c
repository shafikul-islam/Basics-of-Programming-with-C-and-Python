/*Input a Number larger than 1 and check if the number is prime or not.
If prime print Prime otherwise print Not Prime.
 A number is prime if the number is not 1 and
 cannot be divided by any other number except the
 number itself and 1. For example 2, 3, 5, 7, 11, 13, 17, 19 are prime numbers.

Sample Input1:
23
Sample Output1:
Prime
Sample Input2:
8
Sample Output2:
Not Prime   */

#include<stdio.h>
int Prime(int N)
{
    for (int i=2;i<N;i++){
        if(N%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int N;
    printf("Please enter a Number:");
    scanf("%d",&N);
    if(N<=1){
        printf("Invalid Number");
    }
    else if(N>=2 && Prime(N)==0){
        printf("The number is Not prime");
    }
    else
        printf("The number is prime");
    return 0;
}
