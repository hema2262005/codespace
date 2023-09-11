#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void){
string names[] = {"ali","hema"};
string numbers[] = {"011153","010256"};
for(int i=0; i<2; i++){
if(strcmp(names[i],"ali")==0){
    printf("found%s\n",numbers[i]);
    return 0;
}

}
printf("not found\n");
return 1;
}