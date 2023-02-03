#include<stdio.h>
#include<math.h>
int main()
{
 char kitu;
 scanf("%c",&kitu); 
 if(kitu>='A'&&kitu<='Z'||kitu>='a'&&kitu<='z')
 {
   printf("1");
 }
 else{
  printf("0");
 }
 return 0;
}
//if(kitu>='0'&&kitu<='9')
//{
    //printf("1");
//}
//if(kitu>='a'&&kitu<='z')
//{
//  kitu-=32;
//}
//
//
//
//
//