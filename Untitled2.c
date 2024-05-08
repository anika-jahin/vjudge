#include <stdio.h>

// Function to calculate maximum profit for each query
int maxProfit(int b, int p, int f, int h, int c) {
    int max_profit = 0;
    int max_hamburgers, max_chicken_burgers;

    // Calculate maximum number of hamburgers and chicken burgers you can make
    max_hamburgers = (b / 2 < p) ? b / 2 : p;
    max_chicken_burgers = (b / 2 < f) ? b / 2 : f;

    // Calculate profit for each combination of hamburgers and chicken burgers
    for (int num_hamburgers = 0; num_hamburgers <= max_hamburgers; num_hamburgers++) {
        // Calculate remaining buns after using for hamburgers
        int remaining_buns = b - (2 * num_hamburgers);

        // Calculate maximum chicken burgers you can make with remaining buns and chicken cutlets
        int max_chicken_burgers_possible = (remaining_buns / 2 < f) ? remaining_buns / 2 : f;

        // Calculate maximum profit for the current combination
        int total_profit = (num_hamburgers * h) + (max_chicken_burgers_possible * c);

        // Update maximum profit if the current combination yields more profit
        if (total_profit > max_profit) {
            max_profit = total_profit;
        }
    }

    return max_profit;
}

int main() {
    int t; // number of queries
    scanf("%d", &t);

    // Iterate through each query
    for (int i = 0; i < t; i++) {
        int b, p, f; // number of buns, beef patties, and chicken cutlets
        scanf("%d %d %d", &b, &p, &f);

        int h, c; // hamburger and chicken burger prices
        scanf("%d %d", &h, &c);

        // Calculate and print maximum profit for the current query
        printf("%d\n", maxProfit(b, p, f, h, c));
    }

    return 0;
}
