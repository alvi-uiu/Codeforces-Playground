// And that each person will only have what they endeavoured towards , [53:39]

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(x) (int)(x).size()
#define FR(a, b) for (int i = (a); i < (b); ++i)
#define FOR(a, b) for (int i = (a); i <= (b); ++i)
#define ROF(a, b) for (int i = (a); i >= (b); --i)
#define FOREACH(i, v) for (auto &(i) : (v))

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

inline void solve()
{
}

int main()
{
    FAST_IO;

    ll n;
    cin >> n;

    vector<ll> shopPr(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> shopPr[i];
    }

    sort(shopPr.begin(), shopPr.end());

    ll numOfCoins;
    cin >> numOfCoins;

    while (numOfCoins--)
    {

        int coin;
        cin >> coin;

        auto it = upper_bound(shopPr.begin(), shopPr.end(), coin);

        cout << it - shopPr.begin() << "\n"; // it - shop.begin() gives the num of shops thats price is less than the upper bound
    }

    return 0;
}

/*

⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠏⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣠⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⣿⣿⣦⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣴⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢀⡞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⣴⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⣀⣴⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⣠⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣟⣁⣀⣀⣀⣠⣴⣾⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀
⡴⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣦⣴⣶⣶⣶⣶⣾⠟⠉⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣤⣤⣤⣀⣠⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠶⠃⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣾⣿⣿⣿⠟⡿⢳⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣿⣿⣿⣿⢰⡃⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣶⡶⠖⠀
⣦⡀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣿⣿⣿⣿⣷⣦⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⠀
⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⣿⣿⣿⣿⣿⣿⣿⣯⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡀⠀⠀⠀
⣙⠿⣿⣿⣧⡀⠀⠀⠀⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⢸⣿⣿⢿⣿⣿⣿⡇⠈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡀⠀
⣿⣮⣻⣿⣿⣧⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠀⠀⠀⠀⠀⠈⢿⣿⢸⣿⣿⣿⠃⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡄
⣿⣿⣗⣿⣿⣿⣷⠰⠾⠛⠛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⢀⠀⠀⠀⠀⠀⠀⠘⣿⠀⢿⣿⣿⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⠛
⣿⣿⣿⣿⣿⣿⣿⣧⡤⠦⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠉⠓⢦⣀⠀⠀⠀⠀⠁⠈⣿⣿⠀⠀⠀⠈⣿⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀
⣿⣿⣿⢿⣿⣿⣿⣿⠀⣰⣿⣿⣿⣿⠟⡽⢮⡻⣿⣿⣿⡟⢸⡿⠁⠀⠀⠀⠀⠀⠀⠀⠙⠲⠀⠀⠀⠀⠘⣿⠀⠀⠀⠀⠿⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀
⣿⣿⣿⣼⣿⣿⣿⣿⡇⣿⣿⣿⣿⡟⠀⠧⣤⣳⡘⣿⡿⠁⣿⠃⠀⠀⢀⣀⣤⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣤⣿⣿⠟⣿⣿⣿⣿⣿⣿⣿⣇⠀
⣿⣿⢣⣿⣿⣿⣿⣿⣇⠛⠀⣽⣿⣷⠀⢠⠤⢬⡏⣿⡇⠀⠁⠀⢠⢾⡿⠛⠉⠙⢿⣷⣤⠀⠀⠀⠀⠀⠀⢠⠟⠉⠉⠁⠀⠀⣿⠏⠀⣿⣿⣿⣿⣿⠉⠛⠛⠀
⣿⢏⣾⣿⣿⣿⣿⣿⣿⡄⠘⠻⣿⣿⣦⠸⣄⣾⡁⣿⠁⠀⠀⠀⠈⠉⠁⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠠⡏⠀⢀⣀⣀⣀⡀⠀⠀⢠⣿⣿⣿⣿⣿⠀⠀⠀⠀
⢫⣶⣿⣿⣿⣿⣿⣿⣿⣿⣦⠀⣿⣿⣿⣷⡌⠻⣝⣿⠀⠀⠀⣠⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⠀⠚⠉⠉⠙⣿⡄⠀⣸⣿⣿⠿⣿⣿⡄⠀⠀⠀
⣿⣾⣿⣿⣿⣿⣿⣿⡇⣿⣿⣷⠉⠉⣿⣿⡿⣦⣀⣿⠀⠀⠀⢿⣿⢷⣶⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠴⢄⣰⡄⢀⣈⡀⢰⣿⣿⠃⠀⠈⠻⣷⡀⠀⠀
⣿⣿⣿⣿⣿⣿⣻⣿⡇⣸⣿⣿⣇⣠⠾⠋⠀⠀⠉⣿⡇⠀⠀⢸⡇⠀⢨⡀⠀⠉⠛⠓⠒⠤⠤⠤⣄⣈⣀⣀⠀⠀⠀⠉⠉⠉⢡⡿⣫⠟⠁⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣣⣿⢻⣧⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⢹⢿⡀⠀⠈⢿⣦⣼⡧⠤⢤⣤⣤⣀⡀⠀⠀⠀⠀⠉⠉⠙⠓⣿⡆⠀⢀⣾⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠈⡿⢻⣦⡀⠀⠻⣧⡀⠀⠀⠀⠀⠀⠉⠙⠓⠶⢤⣤⣰⣀⣴⣋⣀⣠⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣳⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⣷⣿⣻⢿⣦⡀⠀⠙⢦⣄⡀⠀⠀⠀⠀⠀⠀⠀⠹⣿⡿⠛⠛⣻⡟⠛⠛⠛⠛⠻⠿⠶⠄⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣽⣿⣷⣿⣿⣿⡟⣿⣿⣿⣿⠀⠀⠀⠀⠀⢹⣯⢿⣟⣟⣿⣦⣄⠀⠈⠙⠓⠶⢤⣤⣤⣤⡤⠞⠋⢁⣠⠞⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⡆⠀⠀⠀⠀⢯⣞⢿⣎⣾⣾⡾⣮⣱⣶⣄⣀⠀⠀⠀⣀⣀⡤⠶⠞⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⢹⣇⠿⣿⣿⣿⣿⣄⠀⠀⠀⢻⣿⢏⣾⣫⣿⡿⠛⠋⠀⠀⠉⠙⠛⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⡿⣤⣿⣿⣿⣿⣿⣧⡀⠀⠀⢻⣾⢏⣽⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⡧⡿⣿⣟⣿⣿⣇⠹⡿⣄⠀⠀⣩⢿⣿⢿⣿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣻⡝⢸⡇⠃⣿⣿⣻⣿⣿⡄⠘⢻⣷⣾⣿⣼⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/