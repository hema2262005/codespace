#include<stdio.h>
#include<cs50.h>

int main(void){
int height=get_height("height: ");
draw(height);
void draw(int n){
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++)
    printf("#");
}

}


}