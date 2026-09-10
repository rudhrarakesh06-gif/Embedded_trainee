/*char uart_rx[10] = "HELLO";*/
#include <stdio.h>

int main()
{
    char uart_rx[10] = "HELLO";

    for(int i=0;i<5;i++)
    {
    printf("%c\n", uart_rx[i]);
    }

    return 0;
}