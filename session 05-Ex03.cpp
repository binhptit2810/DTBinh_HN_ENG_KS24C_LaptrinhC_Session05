#include <stdio.h>

int main(){
	// khai bao bien de luu 1 so nguyen duong
	int number;
	// yeu cau nguoi dung nhap vao 1 so nguyen duong
	printf("Moi ban nhap vao 1 so nguyen duong : ");
	scanf("%d",& number);
	// kiem tra xem nguoi dung co nhap la so duong khong
	while (number <= 0) {
        printf("Vui long nhap vao 1 so nguyen duong: ");
        scanf("%d", &number);
    }
	// tinh toan tong tu 1 den so nguoi dung nhap
	int sum = ( number * ( 1 + number ) ) / 2;
	// in ket qua ra man hinh
	printf("Tong tat ca cac chu so tu 1 den so ban nhap la : %d\n", sum);
	return 0;
	
}
