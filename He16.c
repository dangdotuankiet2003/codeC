#include<stdio.h>
int main()
{
  long long n;
  int a[1000],dem=0;
  scanf("%lld",&n);
  while(n!=0)
  {
      a[dem]=n%16;
      n/=16; 
      dem++;
  }
  for(int i=dem-1;i>=0;i--)
  {
    if(a[i]<=9)
    {
      printf("%d",a[i]);
    }
    else{
      printf("%c",a[i]+55);
    }
  }
}