#include "bits/stdc++.h"
using namespace std;

int main()
{
	int d, g;
	vector<int> p, c;
	cin >> d >> g;
	for (int i = 0; i < d; i++)
	{
		int pp, cc;
		cin >> pp >> cc;
		p.push_back(pp);
		c.push_back(cc);
	}
	int ans = 100000;
	for (int use = 0; use < (1 << d); use++)
	{
		int ansTmp = 0;
		int score = 0;
		int maxNoUse = -1;
		for (int i = 0; i < d; i++)
		{
			if ((use >> i) & 1 == 1)//use
			{
				score += (i + 1) * p[i] * 100 + c[i];
				ansTmp += p[i];
			}
			else
			{
				maxNoUse = i;
			}
		}
		if (maxNoUse >= 0 && score < g)
		{
			int cnt = (g - score + (maxNoUse + 1) * 100 - 1) /
				((maxNoUse + 1) * 100);
			if (cnt >= p[maxNoUse])
			{
				ansTmp = 100000;
				continue;
			}
			else if (cnt > 0)
			{
				ansTmp += cnt;
			}
		}
		//cout << use << "  " << score << "  " << ansTmp << endl; //comment out
		ans = min(ans, ansTmp);
	}
		
	cout << ans << endl;
	return 0;
}