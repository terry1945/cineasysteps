
#include<stdio.h>
#include<limits.h>

int main()
{
    printf("short int...\tsize:%d bytes\t",sizeof(short int));
    printf("%d to %d\n", SHRT_MAX, SHRT_MIN);

    return 0;
}

