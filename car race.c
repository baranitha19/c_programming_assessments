#include <stdio.h>

int main() {
    int A, B, C, car;

    scanf("%d%d%d%d", &A, &B, &C, &car);

    if (car % 3 == A % 3)
        printf("Car %d goes into road A", car);
    else if (car % 3 == B % 3)
        printf("Car %d goes into road B", car);
    else if (car % 3 == C % 3)
        printf("Car %d goes into road C", car);
    else
        printf("No path exists");

    return 0;
}
