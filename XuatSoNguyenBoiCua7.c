#include<stdio.h>

// Hàm kiểm tra số nguyên có 2 chữ số và là bội của 7
void printMultiplesOfSeven() {
    int i;
    for(i = 10; i < 100; i++) {
        if(i % 7 == 0) {
            printf("%d\n", i);
        }
    }
}

int main() {
    printMultiplesOfSeven();
    return 0;
}
