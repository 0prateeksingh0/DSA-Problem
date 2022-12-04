/*#include<stdio.h>
int main(){
    char Name[20];
    scanf("%s",&Name);
    printf("%s",Name);
    return 0;

}*/

#include<stdio.h>
#include<string.h>
int main(){
    char Name[20];
    gets(Name);
    puts(Name);
    return 0;
}