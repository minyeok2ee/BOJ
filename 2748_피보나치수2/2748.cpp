#include <iostream>
using namespace std;
#define MAX 90

int main() 
{
	int n;
	long long dp[MAX + 1]{ 0, };
	cin >> n;

	dp[1] = 1;
	dp[2] = 1;

	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
    
	cout << dp[n] << "\n";

	return 0;
}