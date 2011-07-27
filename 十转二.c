#include <stdio.h>

int main(void)
{
    unsigned int a;
    scanf("%d",&a);
    unsigned mask =(1<<31);
    
    for (;mask>0; mask>>=1) 
    {
        printf("%c",((a&mask)>0)?'1':'0');
    }
    printf("\n");
    return 0;
}
