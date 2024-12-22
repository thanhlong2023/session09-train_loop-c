#include <stdio.h>
const int MAX_SIZE = 100;

int size = 0; // số lượng phần tử thực tế mà nó đang lưu trữ
int main(void) {
    int array[MAX_SIZE];
    // xây menu
    while(1){
        printf("============MENU================\n");
        printf("1. Nhap phan tu cho mang.\n");
        printf("2. HIen thi mang.\n");
        printf("3. Them moi gia tri vao mang.\n");
        printf("4. Cap nhat gia tri phan tu.\n");
        printf("5. Xoa phan tu.\n");
        printf("6. thoat.\n");
        printf("================================\n");
        int choice;
        printf("Moi ban nhap chuc nang : ");
        scanf("%d",&choice);

        // điều hương menu
        switch (choice) {
            case 1:
                // nhập phần tử
                // nhập số luợng muôốn nhập cho mảng
                // nhập lân lượt từng phần tử
                int n;
                printf("Moi ban nhap so luong phan tu cho mang");
                scanf("%d",&n);
                if(n<=0 || n> MAX_SIZE){
                    printf("n ko hop le, vui long nhap tu 1 - %d \n", MAX_SIZE);
                    break;
                }
                for (int i = 0; i < n; ++i) {
                    printf("Nhap array[%d] = ",i);
                    scanf("%d",array+i);
                }
                size = n;
                printf("Ban vua nhap thanh cong cho %d phan tu \n");
                break;
            case 2:
                // hiển thị mảng
                if(size == 0){
                    printf("Mang chua co phan tu nao\n");
                } else{
                    printf("Danh sach cac phan tu trong mang la : \n");
                    for (int i = 0; i < size; ++i) {
                        printf("%d ",array[i]);
                    }
                }
                printf("\n");
                break;
            case 3:
                // them moi phan tu vào mảng
                //người dùng nhập giá trị và vị trí cần thêm
               int addIndex, newValue;
                printf("Moi ban nhap gia tri can them");
                scanf("%d",&newValue);
                printf("Moi ban nhap vi tri can them");
                scanf("%d",&addIndex);
                if(addIndex <0){
                    addIndex = 0;
                }else if(addIndex > size){
                    addIndex = size;
                }
                // 1,2,3,4 5
                // a = b ;
                for(int i = size; i> addIndex; i--){
                    array[i] = array[i-1];
                }
                array[addIndex] = newValue ;
                size++;
                printf("Them thanh cong\n");
                break;
            case 4:
                int editIndex, updateValue;
                // sua gia tri tai vi trí index
                printf("Moi ban nhap vi tri can sua");
                scanf("%d",&editIndex);
                if(editIndex <0 ||editIndex >= size ){
                    printf("Vi tri ko hop le \n");
                    break;
                }
                printf("Moi ban nhap gia tri moi (gia tri cu la %d)", array[editIndex]);
                scanf("%d",&updateValue);
                array[editIndex] = updateValue;
                printf("Cap nhat thanh cong\n");
                break;
            case 5:
                // xóa phan tu
                // 1,3,4,5
                int deleteIndex;
                // sua gia tri tai vi trí index
                printf("Moi ban nhap vi tri can xoa");
                scanf("%d",&deleteIndex);
                if(editIndex <0 ||editIndex >= size ){
                    printf("Vi tri ko hop le \n");
                    break;
                }
                for (int i = deleteIndex; i < size -1 ; ++i) {
                    array[i] = array[i+1];
                }
                size--;
                printf("Xoa thanh cong\n1"
                       "");
                break;
            case 6:
                break;
            default:
                printf("Lua chon ko hop le, vui long nhap lai\n");
                break;
        }
        if(choice == 6){
            printf("Thoat chuong trinh");
            break;
        }
    }
    return 0;
}
