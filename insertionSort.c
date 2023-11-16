#include <stdio.h>

int insertionSort(int arr[],int n)
{
    int i;
    for(i=1; i<n; i++)
    {
        int curr=arr[i];
        int prev = i-1;

        while(prev>=0 && arr[prev]>curr)
        {
            arr[prev+1] =arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    for(i=0;i<n; i++)
    {
        printf("%d",arr[i]);
    }
}


int main()
{
    int arr[]={5,4,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,n);
}