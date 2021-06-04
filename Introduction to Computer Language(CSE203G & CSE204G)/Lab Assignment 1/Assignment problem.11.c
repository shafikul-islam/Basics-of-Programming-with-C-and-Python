/*Input a string of alphabet. Then count the number of vowels and consonants.

Sample Input:
Country
Sample Output:
Vowels – 2
Consonant – 5  */
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
    int i,count;
    printf("Input a string of alphabet:");
    scanf("%s",&str);
    for(i=0,count=0;str[i]!='\0';i++)
    {
     if(str[i]=='a' || str[i]=='A'||str[i]=='E'||str[i]=='e'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='U'||str[i]=='u'){
       count++;
        }
    }
    printf("Vowels -%d\n",count);
    printf("Consonant - %d",(string_length(str)-count));
    return 0;

}
