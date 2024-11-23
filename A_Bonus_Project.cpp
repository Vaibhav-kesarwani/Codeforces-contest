#include <cassert>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

using Int = long long;

template <class T1, class T2> ostream &operator<<(ostream &os, const pair<T1, T2> &a) { return os << "(" << a.first << ", " << a.second << ")"; };
template <class T> ostream &operator<<(ostream &os, const vector<T> &as) { const int sz = as.size(); os << "["; for (int i = 0; i < sz; ++i) { if (i >= 256) { os << ", ..."; break; } if (i > 0) { os << ", "; } os << as[i]; } return os << "]"; }
template <class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cerr << *i << " "; cerr << endl; }
template <class T> bool chmin(T &t, const T &f) { if (t > f) { t = f; return true; } return false; }
template <class T> bool chmax(T &t, const T &f) { if (t < f) { t = f; return true; } return false; }
#define COLOR(s) ("\x1b[" s "m")


int N;
Int K;
vector<Int> A, B;

int main() {
  for (; ~scanf("%d%lld", &N, &K); ) {
    A.resize(N); for (int i = 0; i < N; ++i) scanf("%lld", &A[i]);
    B.resize(N); for (int i = 0; i < N; ++i) scanf("%lld", &B[i]);
    
    Int k = K;
    vector<Int> ans(N, 0);
    for (int i = N; --i >= 0; ) {
      const Int t = min(A[i] / B[i], k);
      ans[i] += t;
      k -= t;
    }
    if (k) {
      ans.assign(N, 0);
    }
    
    for (int i = 0; i < N; ++i) {
      if (i) printf(" ");
      printf("%lld", ans[i]);
    }
    puts("");
  }
  return 0;
}
