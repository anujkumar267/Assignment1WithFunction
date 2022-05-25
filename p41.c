//WAP to count the number of times every character occurs in the string.

#include<stdio.h>
#include<string.h>
void occur();
int main(){
    occur();
}

void occur(){
    char str[50];
    char search;
    int i=0,c=0;
    printf("Enter the string:");
    gets(str);
    printf("Enter the word to search:\n");
    scanf("%c",&search);
    while(str[i]!='\0'){
        if(str[i]==search){
            c++;
        }
        i++;
    }
    printf("The word occur of %c =%d",search ,c);
}

/*Enter the string: my name in anuj
Enter the word to search:
n
The word occur of n =3
*/