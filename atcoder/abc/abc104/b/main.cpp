#include "bits/stdc++.h"
using namespace std;

int main()
{
	string s;
	cin >> s;
	bool ok = true;
	int cPlace = -1;
	if (s[0] != 'A')
	{
		ok = false;
	}
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] == 'C')
		{
			if (i < 2 || i == s.length() - 1)
			{
				ok = false;
				break;
			}
			if (cPlace == -1)
			{
				cPlace = i;
			}
			else
			{
				ok = false;
				break;
			}
		}
		else if ('A' <= s[i] && s[i] <='Z')
		{
			ok = false;
			break;
		}
	}
	if (cPlace == -1)
	{
		ok = false;
	}

	if (ok)
	{
		cout << "AC" << endl;
	}
	else
	{
		cout << "WA" << endl;
	}
	return 0;
}