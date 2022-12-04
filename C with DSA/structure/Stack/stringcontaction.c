#include<stdio.h>
#include<string.h>
int main(){
    char str1[10];
    char str2[10];
    char str3[20];
    gets(str1);
    gets(str2);
    int i=0,j=0;
    while(str1[i]!='\0')
    {
        i=i+1;
    }
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str3[i]='\0';
    puts(str3);
    return 0;

}