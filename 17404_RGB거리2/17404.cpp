#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000
#define INF 123456789

int main()
{
    int house[MAX][3];
    int dp[MAX][3];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> house[i][j];
        }
    }

    int result = INF;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                dp[0][j] = house[0][j];
            }
            else
            {
                dp[0][j] = INF;
            }
        }

        for (int k = 1; k < n; k++)
        {
            dp[k][0] = house[k][0] + min(dp[k - 1][1], dp[k - 1][2]);
            dp[k][1] = house[k][1] + min(dp[k - 1][0], dp[k - 1][2]);
            dp[k][2] = house[k][2] + min(dp[k - 1][0], dp[k - 1][1]);
        }

        for (int j = 0; j < 3; j++)
        {
            if (i != j)
            {
                result = min(result, dp[n - 1][j]);
            }
        }
    }
    cout << result << '\n';

    return 0;
}