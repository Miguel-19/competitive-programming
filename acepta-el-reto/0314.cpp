#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <algorithm> // max...
#include <utility> // pair
#include <complex>
#include <climits> // int, ll...
#include <limits> // double...
#include <cmath> // abs, atan...
#include <cstring> // memset
#include <string>
#include <functional> // greater, less...
#include <bitset>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<long, long> l_l;
typedef pair<ll, ll> ll_ll;
typedef pair<double, double> dd;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<dd> vdd;
typedef vector<l_l> vl_l;
typedef vector<vi> vvi;
typedef map<int, int> mii;
typedef map<int, long> mil;
typedef map<long, long> mll;

int main() {
    int t;
    
    cin >> t;
    while (t--) {
        int n, a, b, c, picos = 0, valles = 0;
        cin >> n;
        if (n > 2) {
            cin >> a >> b; n-= 2;
            while (n--) {
                cin >> c;
                if (b > a && b > c) picos++;
                else if (b < a && b < c) valles++;
                a = b, b = c;
            }
        } else
            while (n--) cin >> a;
        
        printf("%d %d\n", picos, valles);
    }
    
    return 0;
}