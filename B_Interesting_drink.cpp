#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(0);
#define Vaibhav cout.tie(0);
#define nt << "\n";
#define yes cout << "YES" nt
#define no cout << "NO" nt
const long double pi = 3.141592653589793238;
const int INF = LONG_LONG_MAX;
const int mod = 1000000007;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b) { return (a / gcd(a, b) * b); }

void Solve_Karo_Jaldi_Sa_Dusra_Bhi_Karna_Hai()
{
    int m, n, i, j, k, ans;
    cin >> n;
    int a[n], p;
    int cnt = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    sort(a, a + n);
    while (m--)
    {
        cin >> k;
        ans = upper_bound(a, a + n, k) - a;
        cout << ans << endl;
    }
}

signed main()
{
    Code By Vaibhav
    // int Bhai_Test_Case_Hai_Ya; cin >> Bhai_Test_Case_Hai_Ya; while (Bhai_Test_Case_Hai_Ya-- > 0)
    Solve_Karo_Jaldi_Sa_Dusra_Bhi_Karna_Hai();

    return 0;
}