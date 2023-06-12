#include<stdio.h>
int main(){
    int n,rev=0,r,temp;
    scanf("%d",&n);
    temp=n;
    while(n){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==temp){
        printf("True");
    }
    else{
        printf("False");
    }
}