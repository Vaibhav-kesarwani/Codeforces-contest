#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(0);
#define Vaibhav cout.tie(0);
#define nt << "\n";
#define yes cout << "YES"
#define no cout << "NO"
#define Yes cout << "Yes"
#define No cout << "No"
const long double pi = 3.141592653589793238;
const int INF = LONG_LONG_MAX;
const int mod = 1000000007;
int gcd(int a, int b){if (b == 0)return a;return gcd(b, a % b);}
int lcm(int a, int b){return (a/gcd(a,b)*b);}


void Solve_Karo_Jaldi_Sa_Dusra_Bhi_Karna_Hai() {
    string s; cin >> s;
    int n = s.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (islower(s[i])) cnt++;
    }
    if (cnt == 0) {
        for (int i = 0; i < n; i++) {
            cout << (char)tolower(s[i]);
        }
    } else if (cnt == 1 && islower(s[0])) {
        cout << (char)toupper(s[0]);
        for (int i = 1; i < n; i++) {
            cout << (char)tolower(s[i]);
        }
    } else {
        cout << s;
    }
}

signed main () {
    Code By Vaibhav
    // int Bhai_Test_Case_Hai_Ya; cin >> Bhai_Test_Case_Hai_Ya; while (Bhai_Test_Case_Hai_Ya-- > 0)
        Solve_Karo_Jaldi_Sa_Dusra_Bhi_Karna_Hai();

    return 0;
}