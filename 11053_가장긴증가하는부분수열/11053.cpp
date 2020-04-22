// #include <iostream>
// using namespace std;
// #define MAX 1000

// int main() 
// {
//     ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int n;
// 	int a[MAX + 1];
// 	int count[MAX + 1];

// 	cin >> n;
// 	for (int i = 1; i <= n; i++) 
//     {
// 		cin >> a[i];
// 	}
	
// 	int max = 0;
// 	for (int i = 1; i <= n; i++) 
//     {
// 		count[i] = 1;
// 		for (int j = 1; j < i;j++) 
//         {
// 			if (a[i] > a[j]) 
//             {
// 				if (count[j] >= count[i]) 
//                 {
// 					count[i] = count[j] + 1;
// 				}
// 			}
// 			else if (a[i] == a[j]) 
//             {
// 				count[i] = count[j];
// 			}
// 		}
// 		if (max < count[i]) 
//         {
// 			max = count[i];
// 		}
// 	}
// 	cout << max << "\n";

// 	return 0;
// }

#include <iostream>
using namespace std;
#define MAX 1000

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int a[MAX + 1];
	int dp[MAX + 1];
	int max = 0;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++)
	{
		dp[i] = 1;
		for (int j = 1; j < i; j++)
		{
			if (a[i] > a[j])
			{
				if (dp[i] <= dp[j])
				{
					dp[i] = dp[j] + 1;
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
		}
	}
	cout << max << '\n';
}