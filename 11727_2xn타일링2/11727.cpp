#include <iostream>
using namespace std;
#define MAX 1000

int main()
{
    int n;
    int dp[MAX + 1]{ 0, };

    cin >> n;

    dp[1] = 1;
    dp[2] = 3;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + (dp[i - 2] * 2)) % 10007;
    }
    cout << dp[n] << "\n";

    return 0;
}