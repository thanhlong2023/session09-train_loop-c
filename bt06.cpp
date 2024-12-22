#include <bits/stdc++.h>
int main()
{
    int a[100][100];
    int n = 0, m = 0;
    while (1)
    {
        int choice;
        printf("============MENU================\n");
        printf("1. Nhập kích cỡ và giá trị các phần tử của mảng 2 chiều.\n");
        printf("2. Hiển thị mảng 2 chiều.\n");
        printf("3. In ra các phần tử lẻ và tính tổng.\n");
        printf("4. In ra các phần tử nằm trên đường biên và tính tổng.\n");
        printf("5. In ra các phần tử nằm trên đường chéo chính.\n");
        printf("6. In ra các phần tử nằm trên đường chéo phụ.\n");
        printf("7. In ra dòng có tổng gí trị các phần tử là lớn nhất.\n");
        printf("8. Thoát.\n");
        printf("================================\n");
        printf("Mời bạn nhập chức năng : ");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            printf("Nhập số hàng: ");
            scanf("%d", &n);
            getchar();
            printf("Nhập số cột: ");
            scanf("%d", &m);
            getchar();
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    printf("Nhập a[%d][%d] = ", i, j);
                    scanf("%d", &a[i][j]);
                }
            }
            printf("Bạn vừa nhập thành công cho mảng 2 chiều %d hàng và %d cột\n", n, m);
            break;
        case 2:
            // In giá trị các phần tử của mảng theo ma trận
            if (n == 0 || m == 0)
            {
                printf("Mảng chưa có phần tử nào\n");
            }
            else
            {
                printf("Danh sách các phần tử trong mảng là: \n");
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        printf("%d ", a[i][j]);
                    }
                    printf("\n");
                }
            }
            break;
        case 3:
            // in ra các phần tử lẻ và tính tổng
            if (n == 0 || m == 0)
            {
                printf("Mảng chưa có phần tử nào\n");
            }
            else
            {
                int sum = 0;
                printf("Danh sách các phần tử lẻ trong mảng là: \n");
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        if (a[i][j] % 2 != 0)
                        {
                            printf("%d ", a[i][j]);
                            sum += a[i][j];
                        }
                    }
                }
                printf("\nTổng các phần tử lẻ trong mảng là: %d\n", sum);
            }
            break;
        case 4:
            // in các phần tử nằm trên đương biên và tính tích
            if (n == 0 || m == 0)
            {
                printf("Mảng chưa có phần tử nào\n");
            }
            else
            {
                int tich = 0;
                printf("Danh sách các phần tử nằm trên đường biên trong mảng là: \n");
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
                        {
                            printf("%d ", a[i][j]);
                            tich *= a[i][j];
                        }
                    }
                }
                printf("\nTổng các phần tử nằm trên đường biên trong mảng là: %d\n", tich);
            }
            break;
        case 5:
            // in ra các phần tử nằm trên đường chéo chính
            if (n == 0 || m == 0)
            {
                printf("Mảng chưa có phần tử nào\n");
            }
            else
            {
                printf("Danh sách các phần tử nằm trên đường chéo chính trong mảng là: \n");
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        if (i == j)
                        {
                            printf("%d ", a[i][j]);
                        }
                    }
                }
            }
            break;
        case 6:
            // in ra các phần tử nằm trên đường chéo phụ
            if (n == 0 || m == 0)
            {
                printf("Mảng chưa có phần tử nào\n");
            }
            else
            {
                printf("Danh sách các phần tử nằm trên đường chéo phụ trong mảng là: \n");
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        if (i + j == n - 1)
                        {
                            printf("%d ", a[i][j]);
                        }
                    }
                }
            }
            break;
        case 7:
            // in ra dòng có tổng gí trị các phần tử là lớn nhất
            if (n == 0 || m == 0)
            {
                printf("Mảng chưa có phần tử nào\n");
            }
            else
            {
                int max = 0, row = 0;
                for (int i = 0; i < n; i++)
                {
                    int sum = 0;
                    for (int j = 0; j < m; j++)
                    {
                        sum += a[i][j];
                    }
                    if (sum > max)
                    {
                        max = sum;
                        row = i;
                    }
                }
                printf("Dòng có tổng giá trị các phần tử lớn nhất là dòng %d với tổng là %d\n", row, max);
            }
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