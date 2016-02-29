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
typedef pair<int, double> id;
typedef pair<double, int> di;
typedef pair<long, long> l_l;
typedef pair<ll, ll> ll_ll;
typedef pair<double, double> dd;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<double> vd;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<dd> vdd;
typedef vector<id> vid;
typedef vector<l_l> vl_l;
typedef vector<vi> vvi;
typedef map<int, int> mii;
typedef map<int, long> mil;
typedef map<long, long> mll;

int M = 78787;

int main() {
    ll m, N;
    while (cin >> m >> N) {
        ll mul = 1, sum = 0, h;
        for (int i = 0; i < N/2; i++) {
            cin >> h;
            sum = (sum + (m*h*mul)%M) % M;
            mul = (mul*3) % M;
        }

        if (N % 2 == 0) {
            mul = M - (26262*mul)%M;
        } else {
            cin >> h;
            sum = (sum + (m*h*mul)%M) % M;
            mul = M - (26262*mul)%M;
        }

        for (int i = 0; i < N/2; i++) {
            cin >> h;
            sum = (sum + (m*h*mul)%M) % M;
            mul = M - (26262*mul)%M;
        }

        cout << sum << endl;
    }

    return 0;
}