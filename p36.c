//WAP to reverse a string.

#include<stdio.h>
void Reverse();
int main(){
    Reverse();
    return 0;
}

void Reverse(){
    char str[20];
    int i,c=0;
    printf("Enter the  String:\n");
    gets(str);
    while(str[c]!='\0'){
        c++;
    }
    printf("The length of String is :%d\n",c);
    printf("The Reverse String is:\n");
    for(i=c-1;i>=0;i--){
        printf("%c",str[i]);
    }
    
}



/*Output
Enter the  String:
My name is Anuj Kumar
The length of String is :21The Reverse String is:
ramuK junA si eman yM 
 */