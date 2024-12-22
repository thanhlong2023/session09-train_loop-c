#include <bits/stdc++.h>
int main()
{
    // khai báo mảng có 100 phần tử
    int a[100];
    int n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhập phần tử thứ %d: ", i);
        scanf("%d", &a[i]);
    }
    int value, index;
    printf("Nhập giá trị cần chèn: ");
    scanf("%d", &value);
    printf("Nhập vị trí cần chèn: ");
    scanf("%d", &index);
    if (index < 0 || index > n)
    {
        printf("Vị trí cần chèn không hợp lệ\n");
    }
    else
    {
        for (int i = n; i > index; i--)
        {
            a[i] = a[i - 1];
        }
        a[index] = value;
        n++;
        printf("Mảng sau khi chèn là: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
}
// ta sử dụng 0 tới n-1 index để nhập n phần tử, sau đó từ vị trí n ta dịch các giá trị sau đó gán giá trị mới vào a[index] rồi tăng size lên ++n, sau đó duyệt lại mảng từ 0 -> n để in ra