/*Input a string and then divide the string through when a ‘#’
 character found and print the divided part through separate line.

Sample Input:
Bangladesh#isvery#BeautifulCountry
Sample Output:
Bangladesh
isvery
BeautifulCountry  */

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
    int length,i;
    char str1[1000];
    printf("Input a string:\n");
    scanf("%s",&str1);
    length=string_length(str1);
 for(i=0;i<length;i++){
    if(str1[i]!='\0' && str1[i]!='#'){
        printf("%c",str1[i]);
    }
    if(str1[i]=='#'){
    printf("\n");
    }
    if(str1[i]=='\0')
        {
        break;
    }
 }
    return 0;
 }

