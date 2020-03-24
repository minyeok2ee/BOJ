#include <iostream>
using namespace std;
#define MAX 45

int main() {
	int n;
	int dp[MAX + 1]{ 0, };
	cin >> n;

	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n] << "\n";

	return 0;
}