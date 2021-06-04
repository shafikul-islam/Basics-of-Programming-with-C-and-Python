/*Input two string and check if the 1st string contains 2nd string or not.
If do print Yes otherwise No.

Sample Input1:
Boundary
und
Sample Output1:
Yes

Sample Input2:
Boundary
uni
Sample Output2:
No     */

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
    int l1,l2,i,j,k,count;
    char s1[1000],s2[999];//2nd string is smaller than 1st string//
    printf("Input longer string:\n");
    scanf("%s",&s1);
    //printf("%s\n",s1);
    printf("Input smaller string:\n");
    scanf("%s",&s2);
   // printf("%s\n",s2);
    l1=string_length(s1);
    l2=string_length(s2);
   // printf("string length is %d,%d\n",l1,l2);
    for (i=0;i<=(l1-l2);i++){
            count=0;
        for(j=0;j<=(l2-1);j++){
        if(s2[j]==s1[i+j])
            count++;
        }
        if(count==l2){
        printf("Yes");
        return 0;
    }


    }
    printf("No");
    return 0;

}
