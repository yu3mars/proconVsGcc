#include "bits/stdc++.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	int cnt = (n + 3) / 4;
	if ((cnt * 4 - n) <= (cnt / 2))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}