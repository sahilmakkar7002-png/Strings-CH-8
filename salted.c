// find the salted form of a password enterd by the user if the salt is 123

#include<string.h>
#include<stdio.h>

void salting( char password[]);

int main(){
    char password[100];
    scanf("%s", password);
    salting(password);

    return 0;

}

void salting(char password[]){
    char salt[]= "123";
    char newpass[200];

    strcpy(newpass, password);// it prints the value of the old string to the new string 
    strcat(newpass, salt);

    puts(newpass);
}