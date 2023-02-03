#include<math.h>
#include<stdio.h>
long long dq(int n)
{
    if(n==0) return 0;
    else return (pow(-1,n)*n+pow(-1,n)*dq(n-1));
}
int main()
{
  int a;
  scanf("%d",&a);
  printf("%lld",dq(a));
} 