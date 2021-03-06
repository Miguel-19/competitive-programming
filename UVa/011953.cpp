#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <queue>
#include <deque>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <list>
#include <forward_list>
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
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef pair<int, double> id;
typedef pair<double, int> di;
typedef pair<ll, ll> ll_ll;
typedef pair<double, double> dd;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<dd> vdd;
typedef vector<id> vid;
typedef vector<vi> vvi;
typedef map<int, int> mii;
typedef map<int, ll> mil;
typedef map<ll, ll> mll;

#define INF 1000000000 // 10^9

int N;

char grid[100][100];

int dr[] = {-1,0,1,0};
int dc[] = {0,1,0,-1};

void floodfill(int r, int c) {
    if (r < 0 || r >= N || c < 0 || c >= N) return;
    if (grid[r][c] == '.') return;
    grid[r][c] = '.';
    for (int d = 0; d < 4; d++)
        floodfill(r + dr[d], c + dc[d]);
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> N; cin.get();
        string s;
        for (int i = 0; i < N; i++) {
            getline(cin, s);
            for (int j = 0; j < N; j++)
                grid[i][j] = s[j];
        }

        int cnt = 0;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                if (grid[i][j] == 'x')
                    floodfill(i, j), cnt++;

        printf("Case %d: %d\n", t, cnt);
    }

    return 0;
}