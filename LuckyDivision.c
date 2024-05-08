#include <stdio.h>

// Function to check if a number is almost lucky
int is_almost_lucky(int n) {
    int lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int num_lucky = sizeof(lucky_numbers) / sizeof(lucky_numbers[0]);
    for (int i = 0; i < num_lucky; i++) {
        if (n % lucky_numbers[i] == 0) {
            return 1; // Return true if n is divisible by any lucky number
        }
    }
    return 0; // Return false if n is not divisible by any lucky number
}

int main() {
    int n;
    scanf("%d", &n); // Read the input number
    if (is_almost_lucky(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
