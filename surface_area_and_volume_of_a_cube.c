#include<stdio.h>
void sv(int l){
 int   sa=l*l*6;
    int v=l*l*l;
    printf("Surface area = %d and Volume = %d",sa,v);
}
int main(){
    int l;
    scanf("%d",&l);
    sv(l);
}