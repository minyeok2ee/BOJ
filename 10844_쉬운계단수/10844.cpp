#include <iostream>
using namespace std;
#define MAX 100
#define MOD 1000000000

int main()
{
    int dp[MAX + 1][10]{ 0, };
    int n;
    cin >> n;

    for (int i = 1; i <= 9; i++)
    {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (j != 0)
            {
                dp[i][j] += dp[i - 1][j - 1];
            }
            if (j != 9)
            {
                dp[i][j] += dp[i - 1][j + 1];
            }
            dp[i][j] %= MOD;
        }
    }

    long long sum(0);
    for (int i = 0; i <= 9; i++)
    {
        sum += dp[n][i];
    }
    cout << sum % MOD << '\n';

    return 0;
}