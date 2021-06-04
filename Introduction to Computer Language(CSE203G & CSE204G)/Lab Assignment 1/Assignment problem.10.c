/*Input a string. Find the length of the string without strlen().
So, here you have to find the string length through ‘\0’ character.

Sample Input:
Asd23df
Sample Output
7    */

#include<stdio.h>
int string_length(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
        ;
        return i;

}
int main()
{
    char str[1000];
    printf("Input a string:");
    scanf("%s",&str);
    printf("String Length is %d",string_length(str));
}
