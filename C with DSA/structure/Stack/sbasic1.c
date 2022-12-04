#include<stdio.h>
struct student
{
    int RollNo;
    int  Section;
    float Percentage;
    int MobNo;
};
int main(){    
    struct student s[2];
    for(int i=0;i<2;i++)
    {
        scanf("%d ",&s[i].RollNo);
        //fflush(stdin);
        scanf("%d ",&s[i].Section);
        scanf("%f ",&s[i].Percentage);
        scanf("%d ",&s[i].MobNo);
    }
    printf("\n");
     for(int i=0;i<2;i++)
    {
        printf("%d ",s[i].RollNo);
        printf("%d ",s[i].Section);
        printf("%f%% ",s[i].Percentage);
        printf("%d ",s[i].MobNo);
        printf("\n");
    }
    return 0;
}