/*Task: Print readings above 80.
Expected:
Fault detected: 95
Fault detected: 100*/
#include <stdio.h>

int main()
{
    int temp[10] = {25, 27, 30, 28, 95, 31, 29, 26, 24, 100};
    int i;
    for(i=0;i<10;i++)
    {
        if(temp[i] > 80)
            printf("%d\n", temp[i]);
    }
    for(i = 0; i < 10; i++)
    {
        if(temp[i] > 80)
            printf("Fault detected: %d\n", temp[i]);
    }

    return 0;
}
