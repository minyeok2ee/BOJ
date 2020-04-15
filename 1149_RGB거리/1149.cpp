#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000

int main() 
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int cost[MAX + 1][3 + 1];
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) 
    {
		for (int j = 1; j <= 3; j++) 
        {
			cin >> cost[i][j];
			if (i != 1) 
            {
				if (j == 1) 
                {
					cost[i][j] += min(cost[i - 1][j + 1], cost[i - 1][j + 2]);
				}
				else if(j == 2) 
                {
					cost[i][j] += min(cost[i - 1][j - 1], cost[i - 1][j + 1]);

				}
				else 
                {
					cost[i][j] += min(cost[i - 1][j - 1], cost[i - 1][j - 2]);
				}
			}
		}
	}
	cout << min({ cost[n][1], cost[n][2], cost[n][3] }) << "\n";

	return 0;
}