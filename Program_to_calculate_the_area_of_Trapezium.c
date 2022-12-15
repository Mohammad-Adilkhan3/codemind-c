#include<stdio.h>
void trp(int b1,int b2,int h){
  float  a=0.5*(b1+b2)*h;
    printf("%.4f",a);
}
int main(){
    int b1,b2,h;
    scanf("%d%d%d",&b1,&b2,&h);
    trp(b1,b2,h);
}