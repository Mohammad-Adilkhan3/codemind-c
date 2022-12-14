#include<stdio.h>
void ldy(int y){
  int  l=y%100;
    printf("%02d",l);
}
int main(){
    int y;
    scanf("%d",&y);
    ldy(y);
}