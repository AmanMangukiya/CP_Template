#include <bits/stdc++.h>
using namespace std;

// Ordered Set
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds; // find_by_order && order_of_key
// template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#ifndef ONLINE_JUDGE
#include "dev/debug.hpp"
#else
#define debug(...) 8
#endif

#define DSV ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define F first
#define S second
#define f(i, x, n)       for (ll i = x; i < n; i++)
#define rf(i, x, n)      for (ll i = x; i >= n; i--)

const ll mod = 1e9+7;
const ll mod2 = 998244353;
const ll N = 1e6+5;

void init(){

}

void solve(){
  
}

int main() {
  DSV;

  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  //   freopen("Error.txt", "w", stderr);
  // #endif

  // init();
  
  ll t = 1;
  cin >> t;
  for (ll T = 1; T <= t; T++) {
    // debug(T);
    solve();
  }
  return 0;
}