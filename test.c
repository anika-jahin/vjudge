#include <stdio.h>
#include <stdlib.h>

int binary_search(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return left; // returning the index where the target should be inserted
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int n, q;
        scanf("%d %d", &n, &q);

        int points[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &points[i]);
        }

        printf("Case %d:\n", t);
        for (int i = 0; i < q; i++) {
            int A, B;
            scanf("%d %d", &A, &B);

            int start_index = binary_search(points, n, A);
            int end_index = binary_search(points, n, B);

            // Adjusting indices for cases where A or B might not be present in points array
            if (points[start_index] < A)
                start_index++;
            if (points[end_index] > B)
                end_index--;

            int count = end_index - start_index + 1;
            printf("%d\n", count);
        }
    }
    return 0;
}

