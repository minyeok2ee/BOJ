#include <iostream>
using namespace std;

#define MAX 10000

int arr[MAX + 1]{ 0, };

int main()
{
    int m, n;
    cin >> m >> n;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        for (int j = i * i; j <= n; j += i)
        {
            arr[j] = 0;
        }
    }

    int sum = 0;
    int min = 0;
    bool flag = false;

    for (int i = m; i <= n; i++)
    {
        if (arr[i] != 0)
        {
            if(!flag)
            {
                min = arr[i];
                flag = true;
            }
            sum+=arr[i];
        }
    }

    if(sum == 0)
    {
        cout << "-1\n";
    }
    else
    {
        cout << sum << '\n' << min << '\n';
    }
    
    return 0;
}