#include <stdio.h>
int main(void)
{
    int a=5,b=7,j=9,m=4;
    
    //remainder
    int r=j%a;
    
    //increament on remainder
    int k=b%m;
    k+=3;
    printf("r is %d\nk is %d\n",r,k);
    
    //relational operators
    printf("%d==%d->%d\n",j,m,j==m);
    printf("%d!=%d->%d\n",j,m,j!=m);
    printf("%d>%d->%d\n",a,m,a>m);
    
    return 0;
}