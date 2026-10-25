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
    insr(s);
    string ans;

    f0s(i, 0, len(s))
    {
        if (s[i] != 'b' && s[i] != 'B')
        {
            ans += s[i];
        }
        elif (s[i] == 'b')
        {
            for (ll j = len(ans) - 1; j >= 0; j--)
            {
                if (islower(ans[j]))
                {
                    ans.erase(j, 1);
                    break;
                }
            }
        }
        elif (s[i] == 'B')
        {
            for (ll j = len(ans) - 1; j >= 0; j--)
            {
                if (isupper(ans[j]))
                {
                    ans.erase(j, 1);
                    break;
                }
            }
        }
    }
    cout << ans;
}

void solve2(int testNo)
{
    insr(s);
    ll n = len(s);
    string ans = "";
    vi s_idx, c_idx;

    f0(i, n)
    {
        if (s[i] == 'b')
        {
            if (!s_idx.empty())
            {
                int idx = s_idx.back();
                s_idx.pop_back();
                ans[idx] = '#';
            }
        }
        elif (s[i] == 'B')
        {
            if (!c_idx.empty())
            {
                int idx = c_idx.back();
                c_idx.pop_back();
                ans[idx] = '#';
            }
        }
        else
        {
            ans.pb(s[i]);

            int curr = len(ans) - 1;
            if (islower(s[i]))
            {
                s_idx.pb(curr);
            }
            elif (isupper(s[i]))
            {
                c_idx.pb(curr);
            }
        }
    }
    for (char c : ans)
    {
        if (c != '#')
        {
            cout << c;
        }
    }
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
        pnl;
    }

    return 0;
}