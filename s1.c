// string is a character array termintaed by a null character \0
// create a string first name & last name to store details of user & print all characters using loops

#include<stdio.h>

void printString(char arr[]);

int main(){
    char firstName[]="SAHIL";
    char lastName[]= "MAKKAR";
    printString(firstName);
    printString(lastName);


}

void printString(char arr[]){
    for (int i=0; arr[i]!='\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}