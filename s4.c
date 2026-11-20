// standard library functions
// strlen(str):this function counts the length of the character excluding zero
#include<string.h>
#include<stdio.h>


int main(){
    char name[]="Sahil Makkar";
    int length= strlen(name);
    printf("Length:%d\n", length);
    return 0;
    
}