#include <stdio.h>

int main() {
    int p, r, t;
    float interest, amount, discount, final_amount;

    scanf("%d%d%d", &p, &r, &t);

    interest = (p * r * t) / 100.0;
    amount = p + interest;
    discount = interest * 2 / 100;
    final_amount = amount - discount;

    printf("%.2f\n", interest);
    printf("%.2f\n", amount);
    printf("%.2f\n", discount);
    printf("%.2f\n", final_amount);

    return 0;
}
