#include<stdio.h>
 #define LEN 5
 int main(void)
 {
    int a[LEN],i;
    printf("Enter an array:\n");   
    for(i=0;i<LEN;i++)
{
    scanf("%d",&a[i]);
}
    for(i=LEN-1;i>=0;i--)
{
    printf("%d ",a[i]);
}
    return 0;
 }
 /*反序输出*/