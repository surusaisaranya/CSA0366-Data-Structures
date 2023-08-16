#include<stdio.h>
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
void findDuplicateElement(int arr[], const int size)
{
    int i, j;
    printf("Repeating elements are ");
    for(i = 0; i < size; i++)
    {
        for(j = i+1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                printf(" %d ", arr[i]);
            }
        }
    }
}
int main()
{
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    const int N = ARRAY_SIZE(arr);
    findDuplicateElement(arr, N);
    return 0;
}
