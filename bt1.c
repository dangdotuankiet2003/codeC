#include<stdio.h>
#include<math.h>
int nt(int n)
{
  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0) return 0;
  }
  return 1;
}
int main()
{
  int sumleft=0,sumright=0;
  int n,a[1000];
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<i;j++)
    {
      for(int k=i+1;k<n;k++)
      {
        sumleft+=a[j];
        sumright+=a[k];
        if(nt(sumleft)&&nt(sumright))
        printf("%d ",i);
      }
    }
  }
  return 0;
}