#include <stdio.h>

int main(void) {
    // 홀수 출력
    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 1) {
            printf("%d\n", i);
        }
    }

    // 짝수 출력
    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    // 소수 출력
    for(int i = 2; i <= 100; i++) {
        int isPrime = 1;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d\n", i);
        }
    }

    return 0;
}
