/*You will be given an array of 0 or 1.
 Now you have to count the maximum consecutive 1 in the array.
 Input - First of all you have to input an integer N (the number of 0 0r 1),
  then 0 or 1(space separated) n times.

Sample Input:
11
1 0 1 1 0 1 1 1 0 1 1
Sample Output
3*/
#include<stdio.h>
int main()
{
    int n,i,arr[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            int j;
            int count=0;
            for(j=i;j<n;j++){
                if(arr[j]==1){
                    count++;
                }
                else{
                    break;
                }
            }
            if(count>max){
                max=count;
            }
            i+=j;
        }
    }
    printf("%d",max);
}
