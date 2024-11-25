#include <stdio.h>

int main() {
    // khai bao bien va vong lap de in ban cuu chuong tu 1 den 9
   
    for (int number = 1; number <= 9; number++) {
        printf("Bang cuu chuong cua %d:\n", number);
    // in bang cuu chuong ra ngoai man hinh
        for (int i = 1; i <= 10; i++) { 
            printf("%d x %d = %d\n", number, i, number * i);
            printf("\n"); 
        }
    
    }

    return 0;
}

