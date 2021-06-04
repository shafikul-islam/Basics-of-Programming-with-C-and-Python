/*Arrange three number from smaller to larger.

Sample Input:
54 2 34
Sample Output:
2 34 54
*/
#include<stdio.h>
float main()
{
    float a,b,c;
    printf("Enter three number:");
    scanf("%f %f %f",&a,&b,&c);
    if(a<=b && b<=c)
        printf("%f %f %f",a,b,c);
    if(a<c && c<b)
        printf("%f %f %f",a,c,b);
    if(c<a && b<c )
        printf("%f %f %f",b,c,a);
    if(b<a && a<c)
        printf("%f %f %f",b,a,c);
    if(c<a && a<b)
        printf("%f %f %f",c,a,b);
    if(b<a && c<b )
       printf("%f %f %f",c,b,a);
}
