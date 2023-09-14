#include<cs50.h>
#include<stdio.h>
void fun(int n);
int main(void){

    fun(4);
}
void fun(int n){
if(n==0){return;}
    printf("alhmdllah\n");
    fun(n-1);
}