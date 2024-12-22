#include <bits/stdc++.h>
int main()
{
    int arr[100];
    printf("Nhập số phần tử của mảng: ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhập phần tử thứ %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("Nhập vị trí cần xóa: ");
    int index;
    scanf("%d", &index);
    if (index < 0 || index >= n)
    {
        printf("Vị trí không hợp lệ\n");
    }
    else
    {
        printf("Bạn đang xóa phần tử %d có giá trị %d \n", index, arr[index]);
        for (int i = index; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Mảng sau khi xóa là: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        // printf("\n");
        // for (int i = 0; i < 5; i++)
        // {
        //     printf("%d ", arr[i]);
        // }
    }
}