#include <stdio.h>
int main()
{
    int a,n,d,t,s;
    //formula to find the nth 
    //t(n)=a+(n-1)d
    /*a=first number of the series
    d=common difference
    n=last number 
    t=nth term
    s=sum of n terms*/
    scanf("\n%d",&a);
    scanf("\n%d",&d);
    scanf("%d",&n);
    t=a+(n-1)*d;
    printf("%d",t);
    /*formula to find the sum
    of the series*/
    //s(n)=2a+(n-1)d
    s=(n/2)*(2*a+(n-1)*d);
    printf("\n%d",s);
    return 0;
}
