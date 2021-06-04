/*Input an integer number which is larger the 100,
then find the second digit from right side.

Sample Input:
1937464
Sample Output:
9   */

#include<stdio.h>
int main()
{
    int Num1,i,dividor1;
    double result=2;
    scanf("%d",&Num1);
    if(Num1<100){
        printf("Invalid Number");
        return 0;}
    dividor1=10;
    i=1;
    while(result>1){
        result=Num1 /dividor1;
        if(result<1)
            break;

        dividor1=dividor1*10;
        i++;
    }
    //1printf("%d\n",i);
  int dividor2=1,pow,j,second_result,final_result;
  for(j=0;j<(i-2);j++){
    dividor2=dividor2*10;
  }
  //printf("%d\n",dividor2);
  second_result=Num1/dividor2;
  final_result=second_result%10;
  printf("%d",final_result);
}
