#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<int> a(n + 1), dp(n + 1), idx(n + 1);

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	int max(0), max_idx(0);
	for (int i = 1; i <= n; i++)
	{
		dp[i] = 1;
		for (int j = 1; j < i; j++)
		{
			if (a[i] > a[j])
			{
				if (dp[i] < dp[j] + 1)
				{
					dp[i] = dp[j] + 1;
					idx[i] = j;
				}
			}
			else if (a[i] == a[j])
			{
				dp[i] = dp[j];
			}
		}
		if (max < dp[i])
		{
			max = dp[i];
			max_idx = i;
		}
	}

	vector<string> result;
	for (int i = max_idx; i > 0;)
	{
		string tmp = to_string(a[i]);
		result.push_back(tmp);
		i = idx[i];
	}

	cout << max << '\n';
	reverse(result.begin(), result.end());
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << ' ';
	}
	cout << '\n';
}