#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int k;
    cin >> k;

    stack<int> acc_book;
    while (k--)
    {
        int n;
        cin >> n;

        if (n != 0)
        {
            acc_book.push(n);
        }
        else
        {
            if (!acc_book.empty())
            {
                acc_book.pop();
            }
        }
    }

    int sum(0);
    while (!acc_book.empty())
    {
        sum += acc_book.top();
        acc_book.pop();
    }

    cout << sum << '\n';

    return 0;
}