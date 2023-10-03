#include <stdio.h>
int main(int argc, char *argv[]) {
    int coins[] = {25, 10, 5, 2, 1};
    int num_coins = sizeof(coins) / sizeof(coins[0]);
    int total_coins = 0;
    int cents;

    if (argc != 2) {
        printf("Error\\n");
        return (1);
    }

    cents = atoi(argv[1]);

    if (cents < 0) {
        printf("0\\n");
        return (0);
    }

    for (int i = 0; i < num_coins; i++) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            total_coins++;
        }
    }

    printf("%d\\n", total_coins);
    return (0);
}
