#include <stdio.h>

int main() {
    int number;

    // yeu cau nguoi dung nhap so tu 1 den 10
    do {
        printf("Moi ban nhap vao mot so nguyen tu 1 den 10: ");
        scanf("%d", &number);

        if (number < 1 || number > 10) {
            printf("So nhap khong hop le. Vui long nhap lai.\n");
        }
    } while (number < 1 || number > 10);

    // in bang cuu chuong voi so ma nguoi dung nhap ra man hinh
    printf("Bang cuu chuong cua so %d:\n", number);
    for (int i = 1; i <= 10; i++) { 
        for (int j = 1; j <= 1; j++) { 
            printf("%d x %d = %d\n", number, i, number * i);
        }
    }

    return 0;
}
