#include <stdio.h>

int *get_pointer()
{
    int x = 10;
    return &x;
}

int main()
{
    // 1. NULL pointer
    int *null_ptr = NULL;

    if (null_ptr == NULL)
    {
        printf("Pointer is NULL\n");
    }


    // 2. Wild pointer
    int *wild_ptr;   // Not initialized
    printf("Wild pointer is declared but not initialized\n");


    // 3. Void pointer
    int num = 10;
    void *void_ptr = &num;
    printf("%d\n", *(int *)void_ptr);


    // 4. Dangling pointer
    int *dangling_ptr = get_pointer();
    printf("Dangling pointer created\n");


    return 0;
}
