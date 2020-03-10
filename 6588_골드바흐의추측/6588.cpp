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