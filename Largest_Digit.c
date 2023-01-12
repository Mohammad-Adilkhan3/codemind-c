#include<stdio.h>
int main(){
    int a,n,m=0,i;
    scanf("%d",&n);
    while(n>0){
        a=n%10;
        if(m<a){
        m=a;
    }
    n=n/10;
    }
    printf("%d",m);
}