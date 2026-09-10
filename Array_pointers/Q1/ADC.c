#include<stdio.h>

int main()
{
    int adc[5] = {120, 125, 130, 128, 132};
    int max=adc[0];
    int min=adc[0];
    for(int i=0;i<5;i++)
    {
        printf("%d\n",adc[i]);

        if(adc[i]>max)
        max=adc[i];

      if(adc[i]<min)
      min=adc[i];
    }
    printf("Maximum = %d\n",max);
      printf("Minimum  =%d\n",min);
}