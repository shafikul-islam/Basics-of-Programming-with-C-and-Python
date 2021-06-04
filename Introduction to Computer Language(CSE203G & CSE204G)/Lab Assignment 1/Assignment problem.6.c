/*Convert a binary number to decimal number.

Sample Input:
101
Sample Output:
5  */

#include<stdio.h>
int string_length(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
        ;
        return i;
}
 int power(int exp)
{
    int result=1;
    while(exp!=0)
    {
      result=result*2;
      --exp;
    }
    return result;

}
int main()
{
    char binary[1000];
    int length,decimal,exp,i;
    printf("Enter the binary number:\n");
    scanf("%s",binary);
    decimal=0;
    length=string_length(binary);
   // printf("%d",length);
    exp=length-1;
    for(i=0;i<length;i++){
        decimal=decimal+(binary[i]-'0')*power(exp);
        exp--;
    }
    printf("Decimal value is %d:\n",decimal);
    return 0;
}
