#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    gets(str);
    int i,flag=0;
    if((str[0]=='_')||(str[0]>='A'&&str[0]<='Z')||(str[0]>='a'&&str[0]<='z'))
    {
        i=1;
        while(str[i]!='\0')
        {
            if((str[i]=='_')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')||(str[i]>='0'&&str[i]<='9')||(str[i]=='$'))
            i++;
            else
            {
                flag=1;
                break;
            }
        }
    }
    else
    {
    flag=1;
    }
    if(flag==1)
    printf("invalid");
    else
    printf("valid");
    return 0;
}
