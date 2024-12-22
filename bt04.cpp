#include <bits/stdc++.h>
const int Max_size = 100;
int size = 0;
int main()
{
    int arr[Max_size];
    // Xây menu
    while (1)
    {
        printf("-------------Menu-----------------");
        printf("1. Nhập phần tử cho mảng\n");
        printf("2. Hiển thị mảng\n");
        printf("3. Thêm mới giá trị vào mảng\n");
        printf("4. Cập nhật giá trị phần tử\n");
        printf("5. Xoa phần tử\n");
        printf(".6 Thoát\n");

        int choice;
        printf("Mời ban nhập chức năng");
        scanf("%d", &choice);

        // điều hướng menu
        switch (choice)
        {
        case 1:
            // nhập phần tử
            // nhâp số lượng muốn nhập cho mảng
            // nhập lần lượt từng phần tử
            int n;
            printf("Mời bạn nhập số lượng phần tử cho mảng");
            scanf("%d", &n);
            if (n <= 0 || n > Max_size)
            {
                printf("n không hợp lệ, vui lòng nhập từ 1 - %d", Max_size);
                break;
            }

            for (int i = 0; i < n; i++)
            {
                printf("Nhập ar[%d] = ", i);
                scanf("%d", arr + i);
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
                    printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        case 3:
            // thêm mới phần tử vào mảng
            // người dùng nhập giá trị và vị trí cần thêm
            int addIndex, newValue;
            printf("Mời bạn nhập giá trị cần thêm");
            scanf("%d", &newValue);
            printf("Mời bạn nhập vị trí cần thêm");
            scanf("%d", &addIndex);
            if (addIndex < 0)
            {
                addIndex = 0;
            }
            else if (addIndex > size)
            {
                addIndex = size;
            }
            // 1 2 3 4 5
            for (int i = size; i > addIndex; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[addIndex] = newValue;
            size++;
            printf("Thêm thành công\n");
            break;
        case 4:
            int editIndex, updateValue;
            // sửa giá trị tại vị trí index
            printf("Mời bạn nhập vị trí cần sửa");
            scanf("%d", &editIndex);
            if (editIndex < 0 || editIndex >= size)
            {
                printf("Vị trí không hợp lệ \n");
                break;
            }
            printf("Mời bạn nhập giá trị mới (giá trị cũ là %d)", arr[editIndex]);
            scanf("%d", &updateValue);
            arr[editIndex] = updateValue;
            printf("Cập nhật thành công\n");
            break;
        case 5:
            // xóa phần tử
            // 1 3 4 5
            int deleteIndex;
            // sửa giá trị tại vị trí index
            printf("Mời bạn nhập vị trí cần xóa");
            scanf("%d", &deleteIndex);
            if (editIndex < 0 || editIndex >= size)
            {
                printf("Vị trí không hợp lệ \n");
                break;
            }
            for (int i = deleteIndex; i < size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            size--;
            printf("Xóa thành công\n");
            break;
        case 6:
            /* code */
            break;
        default:
            printf("Lựa chọn không hợp lệ, vui lòng nhập lại");
            break;
        }

        if (choice == 6)
        {
            printf("Thoát chương trình");
            break;
        }
    }
    return 0;
}