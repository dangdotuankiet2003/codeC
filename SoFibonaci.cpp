#include<stdio.h>
#include<math.h>
long long checkFibo(long long n)
{
    if(n==1||n==2) return 1;
    long long fn2=0,fn1=1;
    for(int i=2;i<=92;i++)
    {
        long long fn=fn1+fn2;
        if(fn==n) return 1;
        fn2=fn1;
        fn1=fn;
    }
}
void inFibo(int n)
{
    if(n==1) printf("0"); 
    else if(n==2) printf("0 1");
    else
    {
        printf("0 1 ");
        long long fn1=1,fn2=0;
        for(int i=1;i<=n;i++)
        {
            long long fn=fn1+fn2;
            printf("%lld ",fn);
            fn2=fn1;
            fn1=fn;
        }
    }
}
long long findFibo(long long n)
{
    if(n==1||n==0) return n;
    else{
        long long fn2=0,fn1=1,fn;
        for(int i=2;i<=n;i++)
        {
            fn=fn1+fn2;
            fn2=fn1;
            fn1=fn;
        }
        return fn;
    }
}

int main()
{
    long long a;
    scanf("%lld",&a);
    printf("%lld",findFibo(a));
}