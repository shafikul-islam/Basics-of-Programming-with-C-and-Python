/*Input n and r then find nCr.

Sample Input:
5 3
Sample Output:
10 */
#include<stdio.h>
long int factorial(int p)
{   long int res=1;
    for(p;p>0;p--){
        res=p*res;
    }
    return res;
}
long int main()
{   int n,r,nCr;
    printf("Enter integer value of n and r:");
    scanf("%ld %ld",&n,&r);
    printf("\nnCr= %ld",(factorial(n)/(factorial(r)*factorial(n-r))));
}
