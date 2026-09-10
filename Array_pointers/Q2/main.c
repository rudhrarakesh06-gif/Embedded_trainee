#include <stdio.h>

int main()
{
    int sensor[8] = {20, 22, 21, 24, 23, 25, 22, 21};
    int sum = 0;
    float average;

    for(int i=0;i<8;i++)
    {
        printf("%d\n", sensor[i]);
        sum = sum + sensor[i];
    }

    average = sum /8.0;

    printf("Average = %.2f\n", average);

    return 0;
}
