#include<stdio.h>

int Sensor_Read(int *temperature, int *pressure);

int main()
{
int temp;
int pressure;
Sensor_Read(&temp, &pressure);
printf("%d %d\n",temp,pressure);

}
int Sensor_Read(int *temperature, int *pressure)
{
    *temperature=35;
    *pressure=1012;
}
