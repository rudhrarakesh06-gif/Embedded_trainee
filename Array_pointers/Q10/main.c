/*Find the number of bytes before 0x55.
Expected:
Packet length = 5
*/
#include <stdio.h>

int main()
{
 unsigned char rx_buffer[] = {0xAA, 0x10, 0x20, 0x30, 0x40, 0x55};

 int i = 0;

while (rx_buffer[i] != 0x55)
    {
        i++;
    }

    printf("%d", i);

    return 0;
}
