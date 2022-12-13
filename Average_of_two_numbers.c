#include<stdio.h>
void avg(int x,int y){
    float a=(x+y)/2.0;
    printf("Average of %d and %d is: %.2f",x,y,a);
}
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    avg(x,y);
}