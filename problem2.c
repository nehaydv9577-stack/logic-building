// write    a  program to check the given letter is vowel or consonant
#include<stdio.h>
int main(){
    char x;
    printf("enter the letter:");
    scanf("%c",&x);
    if(x == 'a'|| x =='e'||x == 'i'|| x == 'o'|| x == 'u'){
    printf("the letter is vowel");
    }
    else{
    printf("the letter is consonant");}
return 0;
}