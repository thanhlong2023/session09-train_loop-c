#include <bits/stdc++.h>
int main()
{
    int array[100];
    int sum = 0;
    int size = 0;
    while (1)
    {
        printf("============MENU================\n");
        printf("1. Nhập số phần tử cần nhập và giá trị các phần tử.\n");
        printf("2. Hiển thị mảng.\n");
        printf("3. In ra giá trị các phần tử chẵn và tính tổng\n");
        printf("4. In ra giá trị lớn nhất và nhỏ nhất trong mảng.\n");
        printf("5. In ra phần tử là số nguyên tố và tính tổng\n");
        printf("6. Nhập vào một số và thống kê trong mảng có bao nhiêu phần tử bằng số đó\n");
        printf("7. Thêm một phần tử vào vị trị chỉ định.\n");
        printf("8. Thoát.\n");
        printf("================================\n");
        int choice;
        printf("Mời bạn nhập chức năng : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // nhập phần tử
            // nhập số luợng muốn nhập cho mảng
            // nhập lân lượt từng phần tử
            int n;
            printf("Mời bạn nhập số lượng phần tử cho mảng: ");
            scanf("%d", &n);
            if (n <= 0 || n > 100)
            {
                printf("n không hợp lệ, vui lòng nhập từ 1 - 100\n");
                break;
            }
            for (int i = 0; i < n; i++)
            {
                printf("Nhập array[%d] = ", i);
                scanf("%d", array + i);
            }
            size = n;
            printf("Bạn vừa nhập thành công cho %d phần tử\n", n);
            break;
        case 2:
            // hiển thị mảng
            if (size == 0)
            {
                printf("Mảng chưa có phần tử nào\n");
            }
            else
            {
                printf("Danh sách các phần tử trong mảng là: \n");
                for (int i = 0; i < size; i++)
                    printf("%d ", array[i]);
            }
            printf("\n");
            break;
        case 3:
            if (size == 0)
            {
                printf("Mảng chưa có phần tử nào\n");
            }
            else
            {
                // in ra giá trị các phần tử chẵn và tính tổng
                printf("Các phần tử chẵn trong mảng là: ");
                for (int i = 0; i < size; i++)
                {
                    if (array[i] % 2 == 0)
                    {
                        printf("%d ", array[i]);
                        sum += array[i];
                    }
                }
                printf("\nTổng các phần tử chẵn trong mảng là: %d\n", sum);
            }
            printf("\n");
            break;
        case 4:
            if (size == 0)
            {
                printf("Mảng chưa có phần tử nào\n");
            }
            else
            {
                // in ra giá trị lớn nhất và nhỏ nhất trong mảng
                int max = array[0];
                int min = array[0];
                for (int i = 1; i < size; i++)
                {
                    if (array[i] > max)
                    {
                        max = array[i];
                    }
                    if (array[i] < min)
                    {
                        min = array[i];
                    }
                }
                printf("Giá trị lớn nhất trong mảng là: %d\n", max);
                printf("Giá trị nhỏ nhất trong mảng là: %d\n", min);
            }
            printf("\n");
            break;
        case 5:
            if (size == 0)
            {
                printf("Mảng chưa có phần tử nào\n");
            }
            else
            {
                // in ra phần tử là số nguyên tố và tính tổng
                int sum = 0;
                printf("Các phần tử là số nguyên tố trong mảng là: ");
                for (int i = 0; i < size; i++)
                {
                    if (array[i] < 2)
                    {
                        continue;
                    }
                    int check = 1;
                    for (int j = 2; j <= sqrt(array[i]); j++)
                    {
                        if (array[i] % j == 0)
                        {
                            check = 0;
                            break;
                        }
                    }
                    if (check == 1)
                    {
                        printf("%d ", array[i]);
                        sum += array[i];
                    }
                }
                printf("\nTổng các phần tử là số nguyên tố trong mảng là: %d\n", sum);
            }
            printf("\n");
            break;
        case 6:
            if (size == 0)
            {
                printf("Mảng chưa có phần tử nào\n");
            }
            else
            {
                // nhập vào một số và thống kê trong mảng có bao nhiêu phần tử có giá trị bằng số đó
                int x;
                printf("Nhập vào một số: ");
                scanf("%d", &x);
                int count = 0;
                for (int i = 0; i < size; i++)
                {
                    if (array[i] == x)
                    {
                        count++;
                    }
                }
                printf("Trong mảng có %d phần tử có giá trị bằng %d\n", count, x);
            }
            printf("\n");
            break;
        case 7:
            if (size == 0)
            {
                printf("Mảng chưa có phần tử nào\n");
            }
            else
            {
                // thêm một phần tử vào vị trí chỉ định
                int addIndex, newValue;
                printf("Mời bạn nhập giá trị cần thêm: ");
                scanf("%d", &newValue);
                printf("Mời bạn nhập vị trí cần thêm: ");
                scanf("%d", &addIndex);
                if (addIndex < 0)
                {
                    addIndex = 0;
                }
                else if (addIndex > size)
                {
                    addIndex = size;
                }
                for (int i = size; i > addIndex; i--)
                {
                    array[i] = array[i - 1];
                }
                array[addIndex] = newValue;
                size++;
                printf("Thêm thành công\n");
            }
            printf("\n");
            break;
        default:
            printf("Lựa chọn không hợp lệ, vui lòng nhập lại\n");
            break;
        }
        if (choice == 8)
        {
            printf("Thoát chương trình\n");
            break;
        }
    }
}