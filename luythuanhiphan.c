#include<stdio.h>
#include<math.h>
//a^b: luy thua nhi phan
long long lt(int a,int b)
{   
    long long res=1;
    for(int i=1;i<=b;i++)
    {
        res*=a;
    }
    return res;
}
long long lt2(int a,int b)
{
    long long res=1;
    //xet tung bit cua b
    while(b!=0)
    {
       if(b%2==1)
       //b la so le : bit cuoi cung hien tai cua b la i
       {
        res*=a; 
       }
       a*=a;
       b/=2;
    }
    return res;
}
int main()
{ 
   int n,m;
   scanf("%d %d",&n,&m);
   printf("%d",lt2(n,m));
}