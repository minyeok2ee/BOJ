#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int dp[MAX + 1][4];
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> dp[i][1] >> dp[i][2] >> dp[i][3];
		if (i == 1)
		{
			continue;
		}

		dp[i][1] += min(dp[i - 1][2], dp[i - 1][3]);
		dp[i][2] += min(dp[i - 1][1], dp[i - 1][3]);
		dp[i][3] += min(dp[i - 1][1], dp[i - 1][2]);
	}
	cout << min({ dp[n][1], dp[n][2], dp[n][3] }) << '\n';

	return 0;
}