#include <stdio.h>
int main(void)
{
    int a[10];
    int i,j,t;
    printf("input 10 number:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("\n");
    for(j=0;j<9;j++)        //进行9次循环，实现9趟比较。
        for(i=0;i<9-j;i++)  //  在每一趟中进行9－j次比较
         if(a[i]>a[i+1])    //相邻两个数比较
           {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
           } 
           printf("the sorted numbers:\n");
           for(i=0;i<10;i++)
           printf("%-4d",a[i]);
    printf("\n");

}
