#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 500

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int dp[MAX + 1][MAX + 1]{ 0, };
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) 
    {
		for (int j = 1; j <= i; j++) 
        {
			cin >> dp[i][j];
			if (i > 1) 
            {
				if (j == 1)		// 첫째
                {
					dp[i][j] += dp[i - 1][j];
                }
				else if (j == i)	// 마지막
                {
					dp[i][j] += dp[i - 1][j - 1];
				}
				else		// 중간
				{
                	dp[i][j] = max(dp[i][j] + dp[i - 1][j], dp[i][j] + dp[i - 1][j - 1]);
				}
			}
		}
	}

	int max=0;
	for (int i = 1;i <= n; i++) 
    {
		if (dp[n][i] > max) 
        {
			max = dp[n][i];
		}
	}
	cout << max << "\n";

	return 0;
}