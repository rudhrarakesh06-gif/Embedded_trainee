/*Expected:
Maximum = 55
*/
#include <stdio.h>
int main()
{
    int sensor[6] = {25, 40, 32, 55, 28, 42};
    int *p = sensor;
    int max = *p;

    for(int i=0;i<6;i++)
    {
        if(*(p + i) > max)
             max = *(p + i);
    }
printf("Maximum = %d", max);

return 0;
}
