#include<stdio.h>
void c2i(float h){
    float i=2.54*h;
    printf("%.2f",i);
}
int main(){
    float h;
    scanf("%f",&h);
    c2i(h);
}