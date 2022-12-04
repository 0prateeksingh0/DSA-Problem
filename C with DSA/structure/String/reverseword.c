#include<stdio.h>
#include<string.h>
int main(){
    int i,j,t;
    char Name[20];
    gets(Name);
    puts(Name);
    i=0;
    while(Name[i]!='\0')
    {
        i=i+1;
    }
    j=0;
    while(j<i){
        t= Name[i];
        Name[i]=Name[j];
        Name[j]=t;
        j++;
        i--;
    }
    printf("%c",t);
    return 0;

}
