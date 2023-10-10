#include<stdio.h>
int main(void)
{
    int i,j,switcher,minimunNum,size;
    int arr[] = {13, 345, 54, 56, 46, 37, 346, 3478, 4, 36, 57};
    size = 11;
    for(i = 0; i < 11 - 1; i++)
    {
        minimunNum = i;
        for(j = i + 1; j < 11; j++)
        {
            if(arr[j] < arr[minimunNum])
            {
                minimunNum = j;
            }
        }
        if(arr[minimunNum] != i)
        {
            switcher = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = switcher;
        }
    }
    for(int k = 0; k < 11; k++)
    {
        printf("%d ",arr[k]);
    }
}