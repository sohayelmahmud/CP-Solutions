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
    insr(s);
    string res = "";
    bool f_cap = true;
    bool all_cap = true;

    // if (len(s) == 1)
    // {
    //     cout << (char)toupper(s[0]);
    //     return;
    // }
    f0(i, len(s))
    {
        if (i == 0)
        {
            if (s[0] < 'a' || s[0] > 'z')
            {
                f_cap = false;
            }
        }
        else
        {
            if (s[i] < 'A' || s[i] > 'Z')
            {
                f_cap = false;
            }
        }
    }

    f0(i, len(s))
    {

        if (s[i] < 'A' || s[i] > 'Z')
        {
            all_cap = false;
        }
    }

    if (f_cap)
    {
        f0(i, len(s))
        {
            if (i == 0)
            {
                res += toupper(s[0]);
            }
            else
            {
                res += tolower(s[i]);
            }
        }
        cout << res;
    }
    elif (all_cap)
    {
        f0(i, len(s))
        {
            res += tolower(s[i]);
        }
        cout << res;
    }
    else
    {
        cout << s;
    }
}

void solve2(int testNo)
{
    string s;
    cin >> s;
    ll n = s.length();
    bool ok = true;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            continue;
        else
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
            cout << (char)(s[0] - 32);
        else
            cout << (char)(s[0] + 32);
        for (ll i = 1; i < n; i++)
        {
            cout << (char)(s[i] + 32);
        }
        cout << endl;
    }
    else
        cout << s << endl;
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

    // cin >> t;
    for (int testNo = 1; testNo <= t; testNo++)
    {
        solve2(testNo);
        cout << endl;
    }

    return 0;
}