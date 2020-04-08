#include <iostream>
using namespace std;
#define MAX 90

int main()
{
    long long dp[MAX + 1][2]{0, };
    int n;
    cin >> n;

    dp[1][0] = 0;
    dp[1][1] = 1;
    for(int i=2; i<=n; i++)
    {
        dp[i][0] += dp[i-1][0];
        dp[i][0] += dp[i-1][1];
        dp[i][1] += dp[i-1][0];
    }

    cout << dp[n][0] + dp[n][1] << '\n';

    return 0;
}