#include <iostream>
using namespace std;
#define MAX 1000000

int prime[MAX + 1];

int main()
{
    for (int i = 2; i*i < MAX; ++i)
    {
        for (int j = i*i; j < MAX; ++j)
        {
            if (j % i == 0)
            {
                prime[j] = 0;
            }
        }
    }
    for (int i = 1; i <= MAX; i++) {
        cout << prime[i] << ' ';
    }

    while (true)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }
    }
}