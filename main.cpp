#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>

using namespace std;

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string f, s;
	cin >> f >> s;

	int cnt = 0;
	for (int i = 0; i < min(f.size(), s.size()); i++)
	{
		if (f[i] != s[i])
		{
			cnt++;
		}
	}
	cnt += max(f.size(), s.size()) - min(f.size(), s.size());

	cout << cnt;
}
