/*You will be given an array of integer numbers.
 Then you have to print the summation of numbers
from ith position to jth position of the array.
Input - First of all input N, then N numbers in the array.
And at last you have to input i and j.

Sample Input:
7
34 4 6 7 10 15 21
1 4
Sample Output:
27
*/
#include<stdio.h>
int main()
{
    int i,N,j,a,Num[100];
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(a=0;a<N;a++)
    {
        scanf("%d",&Num[a]);
    }
    //for(a=0;a<N;a++){
     //   printf("%d th position of Array is: %d\n",a,Num[a]);
    //}
    printf("Enter the value of i and j:");
    scanf("%d %d",&i,&j);
    int sum=0;
    for(i;i<=j;i++){
        sum=sum+Num[i];
    }
    printf("Sum is: %d",sum);
    return 0;
}
