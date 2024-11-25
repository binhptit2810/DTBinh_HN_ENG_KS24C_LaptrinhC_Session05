#include <stdio.h>

int main() {
    int luaChon;
    float so1, so2;

    // Yeu cau nguoi dung nhap 2 so bat ki
    printf("Nhap so thu nhat: ");
    scanf("%f", &so1);
    printf("Nhap so thu hai: ");
    scanf("%f", &so2);

    do {
        // in menu ra ngoai man hinh
        printf("\n======================\n");
        printf("        CALCULATOR        \n");
        printf("======================\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        // Xu li lua chon cua khach hang
        if (luaChon == 1) {
            printf("Tong cua %.2f va %.2f la: %.2f\n", so1, so2, so1 + so2);
        } else if (luaChon == 2) {
            printf("Hieu cua %.2f va %.2f la: %.2f\n", so1, so2, so1 - so2);
        } else if (luaChon == 3) {
            printf("Tich cua %.2f va %.2f la: %.2f\n", so1, so2, so1 * so2);
        } else if (luaChon == 4) {
            if (so2 != 0) {
                printf("Thuong cua %.2f va %.2f la: %.2f\n", so1, so2, so1 / so2);
            } else {
                printf("Khong the chia cho 0!\n");
            }
        } else if (luaChon == 5) {
            printf("Thoat chuong trinh. Tam biet!\n");
        } else {
            printf("Lua chon khong hop le, vui long chon lai!\n");
        }
    } while (luaChon != 5);

    return 0;
}

