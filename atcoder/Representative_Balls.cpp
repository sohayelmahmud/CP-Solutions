// g++ Triple_Xor.cpp -o Triple_Xor && ./Triple_Xor < input.txt
#include <bits/stdc++.h>
using namespace std;
// clang-format off
// Typedefs & Defines
typedef long long                   ll;
typedef long double                 ld;
typedef vector<int>                 vi;
typedef vector<ll>                  vll;
typedef pair<ll, ll>                pii;
typedef vector<pii>                 vpll;

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
// ############ ---- Constants ---- ############
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
// ############ ---- Useful Funtions ---- ############

// clang-format on
// ############ ---- Main Solve Function ---- ############
void solve(int testNo)
{
    inin2(n, m);
    vll ans(m + 1, -1);
    f0(i, n)
    {
        inin2(c, s);

        ans[c] = max(ans[c], s);
    }
    f1(i, m)
    {
        cout << ans[i] << " ";
    }
}

void solve2(int testNo)
{
    // cout << "Case #" << testNo << ": ";
}

void solve3(int testNo)
{
    // cout << "Case #" << testNo << ": ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;

    // cin >> t;
    for (int testNo = 1; testNo <= t; testNo++)
    {
        solve(testNo);
        cout << endl;
    }

    return 0;
}