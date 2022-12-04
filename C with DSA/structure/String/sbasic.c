#include<stdio.h>
struct student
{
    int RollNo;
    int Section;
    float Percentage;
    int MobNo;
};
int main(){
    struct student s={9820,2,84.5,99664};
    printf("%d ",s.RollNo);
    printf("%d ",s.Section);
    printf("%f%% ",s.Percentage);
    printf("%d ",s.MobNo);
    return 0;
}
