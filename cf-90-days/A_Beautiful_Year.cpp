// g++ Triple_Xor.cpp -o Triple_Xor && ./Triple_Xor < input.txt
#include <bits/stdc++.h>
using namespace std;
// clang-format off
// Typedefs & Defines
typedef long long           ll;
typedef long double         ld;
typedef vector<int>         vi;
typedef vector<ll>          vll;
typedef pair<ll, ll>        pii;

#define elif                else if
#define f0(i, n)            for (ll i = 0; i < (n); i++)
#define f1(i, n)            for (ll i = 1; i <= (n); i++)

#define all(x)              (x).begin(), (x).end()
#define rall(x)             (x).rbegin(), (x).rend()
#define len(a)              ((int64_t)(a).size())
#define ff                  first
#define ss                  second
#define pb                  push_back

#define YES                 cout << "YES" << endl
#define NO                  cout << "NO" << endl
#define Yes                 cout << "Yes" << endl
#define No                  cout << "No" << endl
#define yes                 cout << "yes" << endl
#define no                  cout << "no" << endl

#define min_arr(a, n)       *min_element(a, a + n)
#define max_arr(a, n)       *max_element(a, a + n)
#define min_vec(v)          *min_element(all(v))
#define max_vec(v)          *max_element(all(v))

template<typename dataType>
inline dataType abs(dataType k) {if (k >= 0) return k; else return (-k);}
template<typename dataType>
inline bool isEqual(dataType a, dataType b) {return (abs((dataType)(a-b)) < 1e-9);}
// ############ ---- Input Functions ---- ############------------
#define inin(n)             ll n; cin >> n
#define insr(s)             string s; cin >> s
#define inin2(a,b)          ll a,b; cin >> a >> b
#define inarr(arr,n)        ll arr[n]; f0(t_ind, n) cin >> arr[t_ind]
#define varr(v, n) vll      v(n); f0(i, n) cin >> v[i]
template <typename... T> //--------------- multiple variable input
void invr(T &...args)
{                         //-------------- int x, y, z;
    (cin >> ... >> args); // ------------- invr(x, y, z);
} //---------------------------------------------------------------
vector<int> inlt(ll n) //------------- List int input
{
    vector<int> arr(n);         //----- int size = 5;
    for (ll i = 0; i < n; i++) //----- vector<int> a = inlt(size);
        cin >> arr[i];
    return arr;
} //---------------------------------------------------------------
// ############ ---- Constants ---- ############
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
// ############ ---- Useful Funtions ---- ############

// clang-format on
// ############ ---- Main Solve Function ---- ############
void solve(int testNo)
{
    inin(y);
    while (true)
    {
        y++;
        unordered_set<int> s;
        ll temp = y;
        f0(i, 4)
        {
            ll digit = temp % 10;
            s.insert(digit);
            temp /= 10;
        }
        if (s.size() == 4)
        {
            cout << y;
            return;
        }
        else
        {
            s.clear();
        }
    }
}

void solve2(int testNo)
{
    inin(y);
    while (true)
    {
        y++;
        ll temp = y;

        ll digit = temp % 10;
        ll a = digit;
        temp /= 10;
        digit = temp % 10;
        ll b = digit;
        temp /= 10;
        digit = temp % 10;
        ll c = digit;
        temp /= 10;
        digit = temp % 10;
        ll d = digit;
        temp /= 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << y;
            return;
        }
    }
}

void solve3(int testNo)
{
    inin(y);
    while (true)
    {
        y++;
        string s = to_string(y);
        sort(s.begin(), s.end());

        bool ok = true;
        f0(i, 3)
        {
            if (s[i] == s[i + 1])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << y;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;

    // cin >> t;
    for (int testNo = 1; testNo <= t; testNo++)
    {
        solve3(testNo);
    }

    return 0;
}