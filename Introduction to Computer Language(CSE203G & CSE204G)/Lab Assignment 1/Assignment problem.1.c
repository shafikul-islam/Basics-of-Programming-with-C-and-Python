/*1.	Find the largest number among three numbers.
 Input three numbers and find the largest one.


Sample Input:
4 24 15
Sample Output:
24
*/

#include<stdio.h>
float main()
{
    float a,b,c;
    printf("Enter three number:");
    scanf("%f %f %f",&a,&b,&c);
    if(a>b && a>c){
        printf("\n%f is largest",a);
    }
    else if(b>a && b>c){
        printf("\n%f is largest",b);
    }
    else
        printf("\n%f is largest",c);
}
