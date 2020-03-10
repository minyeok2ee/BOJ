#include <iostream>
#include <vector>
using namespace std;

#define MAX 1000000

int arr[MAX + 1]{0, };

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    for (int i = 2; i <= MAX; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i * i <= MAX; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        for (int j = i * i; j <= MAX; j += i)
        {
            arr[j] = 0;
        }
    }
    vector<int> odd_prime;
    for (int i = 3; i <= MAX; i++)
    {
        if (arr[i] != 0)
        {
            odd_prime.push_back(arr[i]);
        }
    }

    while (true)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }
        // vector<int> prime;
        // for (int i = 2; i <= n; i++)
        // {
        //     if (arr[i] != 0)
        //     {
        //         prime.push_back(arr[i]);
        //     }
        // }

        // pair<int, int> result(0, 0);
        // for (int i = 0; i < prime.size(); i++)
        // {
        //     for (int j = 0; j <= i; j++)
        //     {
        //         if (prime[i] + prime[j] == n)
        //         {
        //             if (result.second - result.first <= prime[i] - prime[j])
        //             {
        //                 result.first = prime[j];
        //                 result.second = prime[i];
        //             }
        //         }
        //     }
        //     if (prime[i] > n)
        //     {
        //         break;
        //     }
        // }

        // if (result.first == 0 && result.second == 0)
        // {
        //     cout << "Goldbach's conjecture is worng.\n";
        // }
        // else
        // {
        //     cout << n << " = " << result.first << " + " << result.second << '\n';
        // }


        for (int i = 0; i < odd_prime.size(); i++)
        {
            if (arr[n - odd_prime[i]] == n - odd_prime[i])
            {
                cout << n << " = " << odd_prime[i] << " + " << n - odd_prime[i] << '\n';
                break;
            }
        }
    }
    return 0;
}