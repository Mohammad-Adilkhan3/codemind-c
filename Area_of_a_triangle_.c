#include<stdio.h>
void area(int h,int b){
    int a=0.5*b*h;
    printf("%d",a);
}
int main(){
    int b,h;
    scanf("%d%d",&b,&h);
    area(b,h);
}