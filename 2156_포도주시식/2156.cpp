#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 10000

int dp[MAX + 1];
int wine[MAX + 1];

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> wine[i];
    }

    dp[1] = wine[1];
    dp[2] = wine[1] + wine[2];
    for (int i = 3; i <= n; i++)
    {
        dp[i] = max({dp[i - 1], wine[i] + dp[i - 2], wine[i] + dp[i - 3] + wine[i - 1]});
    }
    cout << dp[n] << "\n";

    return 0;
}
