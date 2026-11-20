// strcmp(firstStr, oldStr): it compares two strings and returns a value!
// strcmp returns 0 if both strings are equal, a negative value if the first string is less than the second string, and a positive value if the first string is greater than the second string.
#include<string.h>
#include<stdio.h>

int main(){
    char firstStr[]="Apple";
    char secondStr[]="Banana";

    printf("%d\n", strcmp(firstStr, secondStr));
    return 0;
}