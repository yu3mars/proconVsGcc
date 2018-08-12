#include "bits/stdc++.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool isPlus;
	vector<int> v;
	if (n == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	else if (n > 0)
	{
		isPlus = true;
		int tmp = n;
		while (tmp>0)
		{
			if (tmp & 1 == 1)
			{
				v.push_back(1);
			}
			else
			{
				v.push_back(0);
			}
			tmp = (tmp >> 1);
		}
		v.push_back(0);
		v.push_back(0);
		v.push_back(0);
		v.push_back(0);
		v.push_back(0);

		for (int i = 0; i < v.size(); i++)
		{
			if (i % 2 == 0) //plus
			{
				while (v[i] > 1)
				{
					v[i] -= 2;
					v[i + 1]++;
				}
			}
			else
			{
				while (v[i] > 1)
				{
					v[i] -= 2;
					v[i + 1]++;
				}
				if (v[i] > 0)
				{
					v[i + 1]++;
				}
			}
		}
		for (int i = v.size() - 1; i >= 0; i--)
		{
			if (v[i] == 0)
			{
				v.erase(v.begin() + i);
			}
			else
			{
				break;
			}
		}
		for (int i = v.size() - 1; i >= 0; i--)
		{
			cout << v[i];
		}
		cout << endl;
	}
	else // n<0
	{
		isPlus = false;
		n = -n;

		int tmp = n;
		while (tmp>0)
		{
			if (tmp & 1 == 1)
			{
				v.push_back(1);
			}
			else
			{
				v.push_back(0);
			}
			tmp = (tmp >> 1);
		}
		v.push_back(0);
		v.push_back(0);
		v.push_back(0);
		v.push_back(0);
		v.push_back(0);

		for (int i = 0; i < v.size(); i++)
		{
			if (i % 2 == 1) //plus
			{
				while (v[i] > 1)
				{
					v[i] -= 2;
					v[i + 1]++;
				}
			}
			else
			{
				while (v[i] > 1)
				{
					v[i] -= 2;
					v[i + 1]++;
				}
				if (v[i] > 0)
				{
					v[i + 1]++;
				}
			}
		}
		for (int i = v.size() - 1; i >= 0; i--)
		{
			if (v[i] == 0)
			{
				v.erase(v.begin() + i);
			}
			else
			{
				break;
			}
		}
		for (int i = v.size() - 1; i >= 0; i--)
		{
			cout << v[i];
		}
		cout << endl;
	}
	return 0;
}