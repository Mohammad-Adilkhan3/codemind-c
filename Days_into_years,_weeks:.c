#include<stdio.h>
void d_yw(int d){
  int  y=d/365;
  int w=(d%365)/7;
  printf("%d
%d",y,w);
}
int main(){
    int d;
    scanf("%d",&d);
    d_yw(d);
}