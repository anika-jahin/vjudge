#include <stdio.h>
#include <stdlib.h>

// Function to calculate the absolute difference between two integers
int absDiff(int a, int b) {
    return abs(a - b);
}

// Function to find the optimal parking spot
int findOptimalParking(int n, int stores[]) {
    int minDistance = 1e9; // Initialize with a large value
    int optimalParking = -1;

    // Check each parking slot
    for (int i = 0; i < 100; i++) {
        int totalDistance = 0;
        for (int j = 0; j < n; j++) {
            totalDistance += absDiff(stores[j], i);
        }

        // Update if this parking slot minimizes the distance
        if (totalDistance < minDistance) {
            minDistance = totalDistance;
            optimalParking = i;
        }
    }

    return optimalParking;
}

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--) {
        int n; // Number of stores
        scanf("%d", &n);

        int stores[n]; // Store positions
        for (int i = 0; i < n; i++) {
            scanf("%d", &stores[i]);
        }

        // Find the optimal parking spot
        int result = findOptimalParking(n, stores);
        printf("Optimal parking spot: %d\n", result);
    }

    return 0;
}
