// strcpy(new str, old str): it copies the value of the old str to the new str.
#include<stdio.h>
#include<string.h>

int main(){
    char oldStr[]="Old String";
    char newStr[]="New String";

    strcpy(newStr,oldStr);
    puts(newStr);
    return 0;
}