#include<stdio.h>
void wt(int x1,int x2,int a){
    int x3=3*a-x1-x2;
    printf("%d",x3);
}
int main(){
    int x1,x2,a;
    scanf("%d%d%d",&x1,&x2,&a);
    wt(x1,x2,a);
}