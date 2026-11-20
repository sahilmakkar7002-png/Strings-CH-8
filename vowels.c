// waf to count the occurence of a vowel in a string

#include<string.h>
#include<stdio.h>

int countVowels(char str[]);

int main(){
    char Str[]=" Sahil is a good boy";
   printf("Vowels:%d\n", countVowels(Str));

    return 0;

}

int countVowels(char str[]){
    int count =0;
    for(int i=0; str[i]!='\0'; i++){
        if ( str[i]=='a' ||  str[i]=='e'  ||   str[i]=='i'  ||  str[i]=='o' ||  str[i]=='u')
            count ++;
    }
    return count;
}