/*Convert a decimal number to binary number.

Sample Input:
5
Sample Output:
101    */
#include<stdio.h>
int string_length(char str[])
{
    int i;
    for(i=0;str[i]!=2;i++)
        ;
        return i;
}
int main()
{
    int decimal,length,i=0;
    char binary[1000];
    int result=1;
    printf("Enter a decimal number:");
    scanf("%d",&decimal);
    printf("\nBinary value is:");
    while(result!=0){
        result=decimal/2;
       // printf("%d",(decimal%2));
        binary[i]=(decimal%2);
       // printf("%d",ara1[i]);
        i++;
        decimal=result;
    }
    binary[i]=2;
    length=string_length(binary);
    //printf("\n%d",length);
    char binary2[length];
    int j;
    for(i=0,j=length;i<=length;i++,j--)
    {
        binary2[j]=binary[i];
    }
    for(i=0;i<=length;i++){
        binary[i]=binary2[i];
    }
    for(i=1;i<=length;i++){
        printf("%d",binary[i]);
    }
    return 0;
}
