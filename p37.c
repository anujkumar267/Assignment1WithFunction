//WAP to check whether the entered string is palindrome or not.
#include<stdio.h>
#include<string.h>
void palindrome();
int main(){
    palindrome();
    return 0;   
}
void palindrome(){
    char str[20];
    int i,c=0,flag=0;
    printf("Enter the string:");
    gets(str);
    while(str[c]!='\0'){
        c++;
    }
    printf("The length of string is %d\n",c);
    for(i=0;i<c;i++){
        if(str[i]!=str[c-i-1]){
            flag =1;
            break;
        }
    }
    if(flag){
        printf(" String is not palindrome",str);
    }
    else{
        printf(" String is palindrome",str);
    }
}


/*
output
Enter the string:madam
The length of string is 5
 String is palindrome
 
 
 
 Enter the string:anuj
The length of string is 4
 String is not palindrome
*/