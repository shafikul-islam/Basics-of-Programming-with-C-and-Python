/*Input a point and find the quadrant number.

Sample Input1:
3 4
Sample Output1:
Quadrant 1

Sample Input2:
-3 -4
Sample Output2:
Quadrant 3
*/
#include<stdio.h>

struct co_ordinate{
   float x_axis;
    float y_axis;
  };


int main()
{
    struct co_ordinate co_ordinate1;
    printf("Enter X and Y co-ordinate:");
    scanf("%f %f",& co_ordinate1.x_axis ,& co_ordinate1.y_axis);
    if(co_ordinate1.x_axis ==0 && co_ordinate1.y_axis==0){
        printf("Its center of Quadrant");
        return 0;
    }
    if(co_ordinate1.x_axis==0 )
        printf("It is Y axis");
    if(co_ordinate1.y_axis==0 )
        printf("It is X axis");
    if(co_ordinate1.x_axis>0 && co_ordinate1.y_axis>0)
        printf("Quadrant 1");
    if(co_ordinate1.x_axis<0 && co_ordinate1.y_axis>0)
        printf("Quadrant 2");
    if(co_ordinate1.x_axis<0 && co_ordinate1.y_axis<0)
        printf("Quadrant 3");
    if(co_ordinate1.x_axis>0 && co_ordinate1.y_axis<0)
        printf("Quadrant 4");
}
