#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        char S[100005];
        scanf("%s", S); // Input string

        int len = strlen(S);
        int start = -1, end = -1; // Variables to track the start and end of the segment of '1's

        // Find the start and end indices of the segment of '1's
        for (int i = 0; i < len; i++) {
            if (S[i] == '1') {
                if (start == -1)
                    start = i;
                end = i;
            }
        }

        // Check if all '1's form a single non-empty segment
        if (start != -1 && end != -1 && start != end)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}

