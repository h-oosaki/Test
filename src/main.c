#include <stdio.h>
 
int main(void)
{
    int i;
    
    for (i = 0; i < argc; i++) {
        printf("%d番目の引数 = %s\n", i, argv[i]);
    }
    printf("Hello, World!\n");

    return 0;
}
