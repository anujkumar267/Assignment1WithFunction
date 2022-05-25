//WAP which reverses every word in the string.

#include <stdio.h>
#include <string.h>
void reverse_word();
int main()
{
    reverse_word();
    return 0;
}
void reverse_word(){
    char str[100], temp;
    int i, len;
    printf("enter the word: ");
    gets(str);
    len = strlen(str) - 1;
    for (i = 0; i < strlen(str) / 2; i++)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
    }
    printf("reverse the word: %s", str);
}


/*  output 
enter the word: Anuj Kumar
reverse the word: rAnujKuma 
*/