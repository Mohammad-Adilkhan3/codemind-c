#include<stdio.h>
int main(){
    int t,s,b,c;
    scanf("%d%d%d",&t,&s,&b);
    c=(2*s*t*b*512)/1024;
    printf("%dKB",c);
}