#include<stdio.h>
#include<math.h>
long long gcd(long long a, long long b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main()
{
    long long n,m;
    scanf("%lld %lld",&n,&m);
    printf("%lld",gcd(n,m));
}