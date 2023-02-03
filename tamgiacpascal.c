#include<stdio.h>
#include<math.h>
long long tiohop2(int n,int k)
{
    k=fmin(k,n-k);
    long long res=1;
    for(int i=1;i<=k;i++)
    {
        res*=(n-k+1);
        res/=i;
    }
    return res ;
}
int main()
{
   int a;
   scanf("%d",&a);
   for(int i=0;i<a;i++)
   {
    for(int j=0;j<=i;j++)
    {
        printf("%lld ",tiohop2(i,j));
    }
    printf("\n");
   }
}