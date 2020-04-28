#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1);

    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> dp[i];

        if (dp[i] + dp[i - 1] >= dp[i])
        {
            dp[i] += dp[i - 1];
        }
    }
    cout << *max_element(dp.begin() + 1, dp.end()) << '\n';

    return 0;
}