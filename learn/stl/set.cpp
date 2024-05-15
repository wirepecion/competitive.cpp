#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
    int t; cin >> t;
	char c;
	int x;
	set <int, less <int>> et;
	while (t--)
	{
		int n; cin >> n;
		while (n--)
		{
			cin >> c;
			if (c == 'a') {
				cin >> x;
				et.insert(x);
			}
			else if (c == 'b')
			{
				for (auto re : et) {
					cout << re << " ";
				}
			}
			else if (c == 'c')
			{
				cin >> x;
				et.erase(x);
			}
			else if (c == 'd')
			{
				cin >> x;
				et.count(x) != 0 ? cout << "1" << " " : cout << "-1" << " ";
			}
			else if (c == 'e')
			{
				cout << et.size() << " ";
			}

		}
		et.clear();
	}
}