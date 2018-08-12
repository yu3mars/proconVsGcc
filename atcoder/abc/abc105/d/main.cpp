#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main()
{
	int n;
	ll m;
	vector<ll> a;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		ll atmp;
		cin >> atmp;
		atmp %= m;
		a.push_back(atmp);
	}
	ll sum = 0;
	unordered_map<ll, ll> map;
	map.insert(make_pair(0, 1));
	for (int i = 0; i < n; i++)
	{
		sum = (sum + a[i]) % m;
		if (map.find(sum) != map.end()) //key ga sonzai 
		{
			map[sum] ++;
		}
		else
		{
			map.insert(make_pair(sum, 1));
		}
	}
	ll ans = 0;
	for (auto p : map)
	{
		ans += p.second * (p.second - 1) / 2;
	}

	cout << ans << endl;
	return 0;
}