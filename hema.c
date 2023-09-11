#include<cs50.h>
#include<stdio.h>
#include<string.h>
typedef struct{
    string names;
    string numbers;
} pb;
int main(void){
pb people[2];
people[0].names="ali";
people[0].numbers="0115033";
people[1].names="david";
people[1].numbers="01521635";
    for(int i = 0 ; i < 2 ; i++){
if(strcmp(people[i].names,"ali")==0){printf("found %s/n",people[i].numbers);
return 0;
}

    }
}