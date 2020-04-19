#include <iostream>
using namespace std;

int main() 
{
	int visited[27];
	int cnt = 0;
	int n;
	cin >> n;
	while (n--)
    {
		bool isGroup = true;
		string word;
		cin >> word;

		fill(visited, visited + 27, 0);
		visited[word[0] - 'a']++;
		for (int i = 1; i < word.size(); i++) 
        {
			if (visited[word[i] - 'a'] != 0) 
            {
				if (word[i - 1] != word[i]) 
                {
					isGroup = false;
					break;
				}
			}
			visited[word[i] - 'a']++;
		}
		if (isGroup) 
        {
			cnt++;
		}
	}
	cout << cnt << "\n";

	return 0;
}