#include<stdio.h>
#include<cs50.h>
int main(void){
int num[] = {4,5,7,5,8,1,0};
for( int i=0; i<7; i++){
    if(num[i]==54){
        printf("found in steps %i\n" , i+1);
        return 0;
    }
}
printf("not found\n");
return 1;

}