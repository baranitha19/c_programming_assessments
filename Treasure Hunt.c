#include <stdio.h>

int main() {
    int coins, x, y, ben, blackbeard, remaining, pirate;

    scanf("%d%d%d", &coins, &x, &y);

    ben = coins * x / 100;
    remaining = coins - ben;

    blackbeard = remaining * y / 100;
    remaining = remaining - blackbeard;

    pirate = remaining / 3;

    printf("%d\n%d\n%d", ben, blackbeard, pirate);

    return 0;
}
