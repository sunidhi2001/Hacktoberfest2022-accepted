/* Dynamic Programming solution to find length of the longest Common Substring */

#include <iostream>
#include <string.h>

using namespace std;

int LCSubStr(char* X, char* Y, int m, int n) {
	int LCSuff[m + 1][n + 1];
	int result = 0;
  for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0 || j == 0)
				LCSuff[i][j] = 0;
			else if (X[i - 1] == Y[j - 1]) {
				LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
				result = max(result, LCSuff[i][j]);
			}
			else
				LCSuff[i][j] = 0;
		}
	}
	return result;
}

int main() {
	char X[] = "My name is Anthony Gonsalves!";
	char Y[] = "My name is Slim Shady!";
	int m = strlen(X);
	int n = strlen(Y);
	cout << "Length of Longest Common Substring is "
		<< LCSubStr(X, Y, m, n);
	return 0;
}
