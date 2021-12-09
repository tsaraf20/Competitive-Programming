#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

class MOD {
    public:
        constexpr static int mod = 998244353;

        static int add (int a, int b) {
            _add(a, b);
            return a;
        }

        static int sub (int a, int b) {
            _sub(a, b);
            return a;
        }

        static void _add (int &a, int &b) {
            a += b;
            if (a >= mod) {
                a -= mod;
            }
        }

        static void _sub (int &a, int &b) {
            a -= b;
            if (a < 0) {
                a += mod;
            }
        }

        template< typename T >
        static int power (int a, T b) {
            int res = 1;
            int *ptr[]{&a, &res};

            while (b) {
                *ptr[b & 1] = (*ptr[b & 1]) * 1LL * a % mod;
                b >>= 1;
            }

            return res;
        }
};

void solve () {
    
    
    
}

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;

    for (int testcase = 1; testcase <= t; ++testcase) {
        // cout << "Case #" << testcase << ": ";
        solve();
    }

    return 0;
}