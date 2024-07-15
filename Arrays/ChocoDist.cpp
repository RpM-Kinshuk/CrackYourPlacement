#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int mxn = 2e5;
                                    // #define Kin

int a[mxn];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

#ifdef Kin
    (void)!freopen("input.txt", "r", stdin);
    (void)!freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int diff = 1e9+7;
        for (int i = 0; i <= n-m; i++)
        {
            diff = min(diff, a[i+m-1] - a[i]);
        }
        cout << diff << '\n';
    }
    return 0;
}