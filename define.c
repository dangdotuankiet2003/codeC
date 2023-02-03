#include<stdio.h>
#include<math.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORd(i,a,b) for(int i=(a);i>=(b);i--)
int main()
{
    FORd(i,10,1){
        printf("%d ",i);
    }
}