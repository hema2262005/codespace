#include<stdio.h>
#include<cs50.h>
#include<string.h>
typedef struct{
    string name;
    string number;
}pb;
int main(void){
pb people[2];
people[0].name="ali";
people[0].number="012156";
people[1].name="sama";
people[1].number="0153411";
for(int i=0; i<2; i++){
    if(strcmp(people.name[i],sama)==0){
        printf("found %s\n",people.number[i])
        return 0;
    }
}
printf("not found");
return 1;
}