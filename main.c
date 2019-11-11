#include <stdio.h>
#include <stdlib.h>

int test(int x, int y, int z)
     {
       return x == y + z || y == x + z || z == x + y;
     }

int main(void)
    {
    printf("%d",test(1, 2, 5));
    printf("\n%d",test(4, 5, 6));
    printf("\n%d",test(2, 6, 8));
    }


