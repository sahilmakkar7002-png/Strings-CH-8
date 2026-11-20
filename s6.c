// strcat(newStr, oldStr):It concatenates values of old string and the new string together
#include<string.h>
#include<stdio.h>

int main(){
    char firstStr[]="Hello";
    char secondStr[]="World";

    strcat(firstStr, secondStr);
    puts(firstStr);

    return 0;
}