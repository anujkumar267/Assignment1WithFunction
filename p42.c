//42) WAP that converts all lowercase characters in a given string to its equivalent uppercase
//character.

#include<stdio.h>
#include<string.h>
void upper();
int main(){
    upper();
}
void upper(){
    char str[20];
    printf("Enter the string:");                          //ASCII Value of 
    gets(str);                                            // 'a' =97
    for(int i=0;str[i]!='\0';i++){                        // 'A'  =65 and the difference is 32
    if(str[i]>='a' && str[i]<='z'){
        str[i]=str[i]-32;
    }
    }
    printf("%s",str);
}



/*
Enter the string:my name is anuj
MY NAME IS ANUJ
*/