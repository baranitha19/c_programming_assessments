#include <stdio.h>

int main() {
    int experience, performance;

    scanf("%d%d", &experience, &performance);

    if (experience > 7 && performance >= 85)
        printf("Level: Senior");
    else if (experience >= 3 && performance >= 80)
        printf("Level: Mid-Level");
    else
        printf("Level: Junior");

    return 0;
}
