#include <bits/stdc++.h>
using namespace std;
// clang-format off
// Typedefs & Defines
using ll                            = long long;
using ld                            = long double;
using vi                            = vector<int>;
using vll                           = vector<ll>;
using vvi                           = vector<vector<int>>;
using pii                           = pair<int, int>;
using pll                           = pair<ll, ll>;
using vpii                          = vector<pair<int, int>>;
using vpll                          = vector<pair<ll, ll>>;

#define elif                        else if
#define f0(i, n)                    for (ll i = 0; i < (n); i++)
#define f1(i, n)                    for (ll i = 1; i <= (n); i++)
#define f0s(i, s, e)                 for (ll i = (s); i < (e); i++)
#define f1s(i, s, e)                 for (ll i = (s); i <= (e); i++)

#define all(x)                      (x).begin(), (x).end()
#define rall(x)                     (x).rbegin(), (x).rend()
#define len(a)                      ((int64_t)(a).size())
#define ff                          first
#define ss                          second
#define pb                          push_back

#define YES                         cout << "YES\n"
#define NO                          cout << "NO\n"
#define Yes                         cout << "Yes\n"
#define No                          cout << "No\n"
#define yes                         cout << "yes\n"
#define no                          cout << "no\n"
#define nl                          "\n"
#define pnl                         cout << "\n"

#define min_vec(v)                  *min_element(all(v))
#define max_vec(v)                  *max_element(all(v))
#define sum_vec(v)                  accumulate(v.begin(), v.end(), 0LL)

#define ins_vec(v, idx, x)          (v).insert((v).begin() + (idx), (x))
#define idx_vec(v, x)               (find((v).begin(), (v).end(), (x)) != (v).end() ? (find((v).begin(), (v).end(), (x)) - (v).begin()) : -1LL)
#define rem_idx_vec(v, idx)         ((idx) >= 0 && (idx) < len(v) ? (v).erase((v).begin() + (idx)) : (v).begin())
#define rem_val_vec(v, x)           do { auto it = find(all(v), (x)); if (it != (v).end()) (v).erase(it); } while(0)
#define move_idx_vec(v, from_idx, to_idx) do { \
    if ((from_idx) < (to_idx)) \
        rotate((v).begin() + (from_idx), (v).begin() + (from_idx) + 1, (v).begin() + (to_idx) + 1); \
    else if ((from_idx) > (to_idx)) \
        rotate((v).begin() + (to_idx), (v).begin() + (from_idx), (v).begin() + (from_idx) + 1); \
} while(0)

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
#define varr(v, n)                   vll v(n); f0(t_ind, n) cin >> v[t_ind]
template <typename... T> //--------------- multiple variable input
void invr(T &...args)
{                         //-------------- int x, y, z;
    (cin >> ... >> args); // ------------- invr(x, y, z);
} //---------------------------------------------------------------

// ############ ---- Output Functions ---- ############------------
#define out(v, st)                   for(ll i = (st), n = len(v); i < n; i++) cout << v[i] << " \n"[i == n - 1]
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
    sort(rall(a));
    // out(a, 0);
    ll sum = 0;
    ll i_time = 2;
    for (ll i = 0; i < n; i += 2)
    {
        sum += (a[i] * i_time);
        if ((i + 1) < n)
        {
            sum += (a[i + 1] * i_time);
        }
        i_time += 2;
    }
    cout << sum << nl;
    f0(i, n + 1)
    {
        cout << i << " ";
    }
}

void solve2(int testNo)
{
    inin(n);
    vpll a(n);
    f0(i, n)
    {
        cin >> a[i].ff;
        a[i].ss = i + 1;
    }
    sort(rall(a));
    vll x(n + 1);
    x[0] = 0;
    ll sum = 0, dist = 1;
    f0(i, n)
    {
        ll visit = a[i].ff, idx = a[i].ss;

        if (i % 2 == 0)
        {
            x[idx] = dist;
        }
        else
        {
            x[idx] = -dist;
            dist++;
        }
        sum += 2LL * abs(x[idx]) * visit;
    }
    cout << sum << nl;
    out(x, 0);
}

void solve3(int testNo)
{
    // cout << "Case #" << testNo << ": ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;

    cin >> t;
    for (int testNo = 1; testNo <= t; testNo++)
    {
        solve2(testNo);
    }

    return 0;
}