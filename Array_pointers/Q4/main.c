/*If voltage > 14, consider it an over-voltage condition.
Task:
Print Number of over-voltage conditions = ?*/

#include<stdio.h>
int main()
{
    int volt[10] = {12, 13, 12, 14, 15, 13, 16, 12, 17, 13};
    int count = 0;

    for(int i=0;i<10;i++)
    {
        if(volt[i] > 14)
        count++;
    }
printf("Number of over-voltage = %d\n", count);
    return 0;
}
