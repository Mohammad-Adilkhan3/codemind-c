#include<stdio.h>
int main(){
    int n,i,rev=0,t;
    scanf("%d",&n);
    t=n;
    while(n>0){
        i=n%10;
        rev=rev*10+i;
   n=n/10;     
        
    }
    if(t==rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}