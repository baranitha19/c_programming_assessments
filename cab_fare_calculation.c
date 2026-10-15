#include <stdio.h>
int main() {
    int distance, fare = 100;
    char member;

    scanf("%d", &distance);
    scanf(" %c", &member);

    if (distance > 10)
        fare += (distance - 10) * 20;

    if (member == 't' || member == 'T')
        fare = fare - (fare * 10 / 100);

    printf("Final Fare: ₹%d", fare);

    return 0;
}
