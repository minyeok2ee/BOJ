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

    vector<int> price(n + 1);
    vector<int> dp(n + 1, 10001);
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> price[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i] = min(dp[i], dp[i - j] + price[j]);
        }
    }
    cout << dp[n] << '\n';

    return 0;
}