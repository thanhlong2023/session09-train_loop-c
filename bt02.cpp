#include <bits/stdc++.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Nhập vị trí cần sửa: ");
    int index;
    scanf("%d", &index);
    if (index < 0 || index > 10)
    {
        printf("Vị trí cần sửa không hợp lệ\n");
    }
    else
    {
        int value;
        printf("\nNhập giá trị cần sửa(bạn đang thay đổi arr[%d] - %d): ", index, arr[index]);
        getchar();
        scanf("%d", &value);

        arr[index] = value;
        printf("\nMảng sau khi sửa là: ");
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}