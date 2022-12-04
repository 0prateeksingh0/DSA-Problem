//Source Code for Array repetition.
#include<stdio.h>
int main()
{
    printf(“Name-Prateek\\CSE-B\\2100320100127");
    int n, flag = 0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int r[100], u[100], k = 0, l = 0;
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        if (arr[i] != 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    if (flag == 0)
                    r[k++] = arr[i];
                    flag = 1;
                    arr[j] = 0;
                }
            }
                    if (flag == 0)
                    {
                        u[l++] = arr[i];
                    }
            }
            }
printf("Array after the removal of repeated elements is:");
for (int i = 0; i < k; i++)
{
    printf("%d ",r[i]);
}
for (int i = 0; i < l; i++)
{
    printf("%d ",u[i]);
}
return 0;
}