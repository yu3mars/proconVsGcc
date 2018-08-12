#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
ll dp[100010][4];

int main()
{
	string s;
	cin >> s;
	dp[0][0] = 1;
	int n = s.length();
	int mod = 1e9 + 7;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			dp[i + 1][j] = dp[i][j];
		}
		if (s[i] == 'A')
		{
			dp[i + 1][1] += dp[i][0];
		}
		else if (s[i] == 'B')
		{
			dp[i + 1][2] += dp[i][1];
		}
		else if (s[i] == 'C')
		{
			dp[i + 1][3] += dp[i][2];
		}
		else
		{
			for (int j = 0; j < 4; j++)
			{
				dp[i + 1][j] = 3 * dp[i][j];
			}
			dp[i + 1][1] += dp[i][0];
			dp[i + 1][2] += dp[i][1];
			dp[i + 1][3] += dp[i][2];
		}
		for (int j = 0; j < 4; j++)
		{
			dp[i + 1][j] %= mod;
		}
	}
	cout << dp[n][3] << endl;
    return 0;
}