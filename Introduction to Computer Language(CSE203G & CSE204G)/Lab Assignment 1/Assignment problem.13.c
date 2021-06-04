/*Input two string and then concatenate them.
So if a string is “water” and another string is “melon”.
Then the output would be “watermelon”

Sample Input:
Cricket
Team
Sample Output:
CricketTeam  */

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
    char str1[1000],str2[1000],str3[2000];
    int i,j,length1,length2;
    printf("Input  1st string :");
    scanf("%s",&str1);
    printf("Input  2nd string :");
    scanf("%s",&str2);
    length1=string_length(str1);
    length2=string_length(str2);
    for(i=0,j=0;i<length1;i++,j++){
        str3[j]=str1[i];

    }
    for(i=0,j=length1;i<length2;i++,j++){
        str3[j]=str2[i];
    }
    str3[j]='\0';
    printf("The concatenated string :%s",str3);
}
