#include<stdio.h>
void swap(int a,int b){
    printf("%d
%d",b,a);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);
}