/*
16.	Input N numbers and print the numbers from smaller to larger.
 Input – first of all, input N, then N Numbers in a Array.

Sample Input:
8
5 3 2 5 4 7 1 8
Sample Output:
1 2 3 4 5 5 7 8  */



#include<stdio.h>
int main()
{
    int i,N,j,a,Num[100],small;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&Num[i]);
    }
    //for(i=0;i<N;i++){
      //  printf("%d th element is: %d\n",i+1,Num[i]);
    //}
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(Num[i]>Num[j]){
                a=Num[i];
                Num[i]=Num[j];
                Num[j]=a;
            }
        }
    }
    printf("The numbers from smaller to large :\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",Num[i]);
    }
}
