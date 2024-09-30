#include<stdio.h>
#include<stdlib.h>
int sum(int a,int b){
    int s=a+b;
    return s;
}
int main(){
    int a,b,s;
    printf("Donner moi les val a : ");
    scanf("%d",&a);
    printf("Donner moi les val b: ");
    scanf("%d",&b);
    s=sum(a,b);
    printf("%d",s);
    return 0;
}