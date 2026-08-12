#include <bits/stdc++.h>
using namespace std;
// clang-format off
// Typedefs & Defines
using ll                            = long long;
using ld                            = long double;
using vi                            = vector<int>;
using vll                           = vector<ll>;
using pii                           = pair<ll, ll>;
using vpll                          = vector<pii>;

#define elif                        else if
#define f0(i, n)                    for (ll i = 0; i < (n); i++)
#define f1(i, n)                    for (ll i = 1; i <= (n); i++)

#define all(x)                      (x).begin(), (x).end()
#define rall(x)                     (x).rbegin(), (x).rend()
#define len(a)                      ((int64_t)(a).size())
#define ff                          first
#define ss                          second
#define pb                          push_back

#define YES                         cout << "YES" << endl
#define NO                          cout << "NO" << endl
#define Yes                         cout << "Yes" << endl
#define No                          cout << "No" << endl
#define yes                         cout << "yes" << endl
#define no                          cout << "no" << endl

#define min_arr(a, n)               *min_element(a, a + n)
#define max_arr(a, n)               *max_element(a, a + n)
#define sum_arr(a, n)               accumulate(a, a + n, 0LL)

#define min_vec(v)                  *min_element(all(v))
#define max_vec(v)                  *max_element(all(v))
#define sum_vec(v)                  accumulate(v.begin(), v.end(), 0LL)

#define uniq_vec(v)                 (v).erase(unique((v).begin(), (v).end()), (v).end())
#define count_vec(v, x)             count(v.begin(), v.end(), x)
#define find_vec(v, x)              (find(v.begin(), v.end(), x) - v.begin())
#define replace_vec(v, l, r, old_val, new_val) replace(v.begin() + l, v.begin() + r + 1, old_val, new_val)
#define fill_vec(v, l, r, x)        fill(v.begin() + l, v.begin() + r + 1, x)

template<typename dataType>
inline dataType abs(dataType k) {if (k >= 0) return k; else return (-k);}
template<typename dataType>
inline bool isEqual(dataType a, dataType b) {return (abs((dataType)(a-b)) < 1e-9);}
// ############ ---- Input Functions ---- ############------------
#define inin(n)                      ll n; cin >> n
#define insr(s)                      string s; cin >> s
#define inch(c)                      char c; cin >> c
#define inin2(a,b)                   ll a,b; cin >> a >> b
#define inarr(arr,n)                 ll arr[n]; f0(t_ind, n) cin >> arr[t_ind]
#define varr(v, n)                   vll v(n); f0(i, n) cin >> v[i]
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
// ############ --------- Constants --------- ############
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
// ############ ------ Useful Funtions ------ ############

// clang-format on
// ############ ---- Main Solve Function ---- ############
void solve(int testNo)
{
    inin(n);
    varr(a, n);
    ll L = 0, R = 0;

    for (ll i = 0; i < n; i++)
    {
        if (a[i] == a[0])
            L++;
        else
            break;
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] == a[n - 1])
            R++;
        else
            break;
    }

    if (L == n)
    {
        cout << 0;
    }
    else if (a[0] != a[n - 1])
    {
        cout << min(n - L, n - R);
    }
    else
    {
        cout << n - L - R;
    }
}

void solve2(int testNo)
{
    // from jiangly's idea
    inin(n);
    varr(a, n);

    ll ans = n;
    for (ll x : {a[0], a[n - 1]})
    {
        ll l = 0, r = n;

        while (l < n && a[l] == x)
        {
            l++;
        }
        while (r > 0 && a[r - 1] == x)
        {
            r--;
        }

        ans = min(ans, max(0LL, r - l));
    }
    cout << ans;
}

void solve3(int testNo)
{
    inin(n);
    varr(a, n);

    ll l = 0, r = 0;
    while (l < n && a[l] == a[0])
    {
        l++;
    }
    while (r < n && a[n - r - 1] == a[n - 1])
    {
        r++;
    }

    if (l == n)
    {
        cout << 0;
    }
    else if (a[0] != a[n - 1])
    {
        cout << min(n - l, n - r);
    }
    else
    {
        cout << n - l - r;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;

    cin >> t;
    for (int testNo = 1; testNo <= t; testNo++)
    {
        solve3(testNo);
        cout << endl;
    }

    return 0;
}