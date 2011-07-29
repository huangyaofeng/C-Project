#include <stdio.h>
#define N   100
int main(void)
{
    char str[N]="hello world";
    char *ptr;
    ptr=str;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
    ptr--;          //此时已到'\0'位置，所以向后退一位ptr--
    while(ptr>=str)
    {
    printf("%c",*ptr);
    ptr--;
    }
    printf("\n");
    return 0;

}
