#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> v(n, vector<char>(m)); //store data
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    vector<vector<int>> row(n, vector<int>(m, -1)), col(n, vector<int>(m, -1));
    for (int i = 0; i < n; i++)
    {
        int prev = (v[i][0] == '0' ? 0 : -1);
        for (int j = 1; j < m; j++)
        {
            row[i][j] = prev;
            if (v[i][j] == '0')
            {
                prev = j;
            }
        }
    }

    for (int j = 0; j < m; j++)
    {
        int prev = (v[0][j] == '0' ? 0 : -1);
        for (int i = 1; i < n; i++)
        {
            col[i][j] = prev;
            if (v[i][j] == '0')
            {
                prev = i;
            }
        }
    }

    vector<vector<ll>> dp(n, vector<ll>(m));
    if (v[0][0] == '1')
    {
        cout << 0 << endl;
        return 0;
    }
    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i == 0 && j == 0) || v[i][j] == '1')
            {
                continue;
            }
            if (i == 0)
            {
                if (row[i][j] != -1)
                {
                    dp[i][j] = dp[i][row[i][j]];
                }
            }

            if (j == 0)
            {
                if (col[i][j] != -1)
                {
                    dp[i][j] = dp[col[i][j]][j];
                }
            }
            ll x = 0, y = 0;
            if (row[i][j] != -1)
            {
                x = dp[i][row[i][j]];
            }
            if (col[i][j] != -1)
            {
                y = dp[col[i][j]][j];
            }
            dp[i][j] = x + y;
            dp[i][j] %= mod;
        }
    }
    cout << dp[n - 1][m - 1] % mod << endl;
    return 0;
}