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

    return 0;
}
