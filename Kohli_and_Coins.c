#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%5!=0){
        printf("%d",-1);
    }
    else{
        printf("%d",n/10+(n%10)/5);
    }
}