//14. Count common sub-sequence in two strings

#include <stdio.h>
#include <string.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int countCommonSubsequences(char *str1, char *str2) {
    int m = strlen(str1);
    int n = strlen(str2);
    int dp[m + 1][n + 1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

int main() {
    char str1[] = "abc";
    char str2[] = "ac";
    printf("Count of common subsequences: %d\n", countCommonSubsequences(str1, str2));
    return 0;
}