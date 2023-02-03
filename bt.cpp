#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int a[1000],n,K;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cin>>K;
  int dem=0;
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(a[i]+a[j]==K) dem++;
    }
  }
  cout<<dem<<endl;
  return 0;
}