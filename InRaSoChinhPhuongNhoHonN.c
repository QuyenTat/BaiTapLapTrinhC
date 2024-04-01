#include<stdio.h>
#include<math.h>

// Hàm kiểm tra số chính phương
int isPerfectSquare(int number) {
    int root = sqrt(number);
    return root * root == number;
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void printPerfectSquares(int n) {
    int count = 0;
    printf("Các số chính phương nhỏ hơn %d là: ", n);
    for(int i = n - 1; i > 0; i--) {
        if(isPerfectSquare(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTổng cộng có %d số chính phương.\n", count);
}

int main() {
    int n;
    printf("Nhập số nguyên dương n: ");
    if(scanf("%d", &n) != 1 || n < 0) {
        printf("Vui lòng nhập một số nguyên dương.\n");
        return 1;
    }
    printPerfectSquares(n);
    return 0;
}
