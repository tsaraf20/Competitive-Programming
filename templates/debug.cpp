#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define __DEBUG__

#ifdef __DEBUG__
#define debug(...) deb(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) ;
#endif

string getNextArgName (string &names) {
    int cnt = 0;
    string name = "";
    for (int i = 0; i < names.length(); ++i) {
        char &c = names[i];
        if (c == ',' && cnt == 0) {
            names = names.substr(i + 1);
            break;
        } else {
            if (c == '(') {
                ++cnt;
            } else if (c == ')') {
                --cnt;
            }
            name += c;
        }
    }
    return name;
}

template< typename T >
void deb (string name, T x) {
    cout << name << " = " << x << endl;
}

template< typename Head, typename... Tail >
void deb (string names, Head x, Tail... args) {
    string name = getNextArgName(names);
    
    cout << name << " = " << x << ",";
    deb(names, args...);
}

void solve () {
    
    int a = 5, b = 3;
    string c = "hello world";
    debug(a, b, c);
    
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