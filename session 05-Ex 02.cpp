#include <stdio.h>

int main() {
	// khai bao hai bien so ban dau va so nguoi dung nhap
    int number = 12; 
    int check;      

    // yeu cau nguoi dung nhap vao 1 so nguyen
    printf("Moi ban nhap 1 so nguyen: ");
    scanf("%d", &check);

    //kiem tra xem so nguoi dung nhap co dung hay khong
    while (check != number) {
        printf("Sai roi! Moi ban nhap lai: ");
        scanf("%d", &check);
    }

    printf("So ban nhap la chinh xac\n");

    return 0;
}

