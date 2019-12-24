#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    char *p, s[100];
    long n;
    //int num[5]={1,2,3,4,5};
    //printf("%d%d%d%d%d",num[0],num[1],num[2],num[3],num[4]);
    while (fgets(s, sizeof(s), stdin)) {
        n = strtol(s, &p, 10);
        if (p == s || *p != '\n') {
            printf("Please enter an integer: ");
        } else break;
    }
    printf("You entered: %x\n", n);
    return 0;
}
