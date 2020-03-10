// #include <iostream>
// #include <vector>
// using namespace std;

// #define MAX 12

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> fact(n+1);
//     fact[0] = 1;

//     for(int i=1; i<=n; i++)
//     {
//         fact[i] = fact[i-1] * i; 
//     }
    
//     cout << fact[n];

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
	int N, fact(1);
	cin >> N;

	for (int i = 1; i <= N; i++) {
		fact *= i;
	}
	cout << fact << '\n';

	return 0;
}
