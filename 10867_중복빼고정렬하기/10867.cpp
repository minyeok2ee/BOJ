#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> arr;
    int n;
    cin >> n;

    while (n--)
    {
        int tmp;
        cin >> tmp;
        arr.insert(tmp);
    }

    for(set<int>::iterator it=arr.begin(); it != arr.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << '\n';

    return 0;
}