#include<stdio.h>
void aop(int a,int b){
  int  s=a+b;
   int d=a-b;
 int   p=a*b;
    int q=a/b;
    int r=a%b;
    printf("Sum:%d
Difference:%d
Product:%d
Quotient:%d
Remainder:%d",s,d,p,q,r);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    aop(a,b);
}