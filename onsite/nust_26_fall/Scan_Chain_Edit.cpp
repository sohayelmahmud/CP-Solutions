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
#define pf                          push_front

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
    vector<string> node(n);
    f0(i, n)
    {
        cin >> node[i];
    }
    inin(ops);
    f0(i, ops)
    {
        insr(s);
        if (s == "INSERT")
        {
            insr(new_node);
            insr(idx_node);
            ll idx = idx_vec(node, idx_node);
            if (idx_node == "SI")
                idx = -1;
            ins_vec(node, idx + 1, new_node);
        }
        elif (s == "REMOVE")
        {
            insr(rem_node);
            rem_val_vec(node, rem_node);
        }
        else
        {
            insr(s1);
            insr(s2);
            rem_val_vec(node, s1);

            if (s2 == "SI")
            {
                ins_vec(node, 0, s1);
            }
            else
            {
                ll idx2 = idx_vec(node, s2);
                ins_vec(node, idx2 + 1, s1);
            }
        }
    }
    cout << len(node) << '\n';
    if (len(node) > 0)
    {
        for (auto x : node)
        {
            cout << x << " ";
        }
    }
    else
    {
        cout << "EMPTY";
    }
}

void solve2(int testNo)
{
    inin(n);
    list<string> chain;
    unordered_map<string, list<string>::iterator> pos;

    f0(i, n)
    {
        insr(s);
        chain.pb(s);
        pos[s] = prev(chain.end());
    }

    inin(ops);
    f0(i, ops)
    {
        insr(s);
        if (s == "INSERT")
        {
            insr(x);
            insr(y);

            if (y == "SI")
            {
                chain.pf(x);
                pos[x] = chain.begin();
            }
            else
            {
                auto it = pos[y];
                auto next_it = next(it);
                pos[x] = chain.insert(next_it, x);
            }
        }
        elif (s == "REMOVE")
        {
            insr(x);
            if (pos.count(x))
            {
                chain.erase(pos[x]);
                pos.erase(x);
            }
        }
        else
        {
            insr(x);
            insr(y);

            chain.erase(pos[x]);

            if (y == "SI")
            {
                chain.pf(x);
                pos[x] = chain.begin();
            }
            else
            {
                auto it = pos[y];
                auto next_it = next(it);
                pos[x] = chain.insert(next_it, x);
            }
        }
    }

    cout << chain.size() << '\n';
    if (!chain.empty())
    {
        for (auto it = chain.begin(); it != chain.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << '\n';
    }
    else
    {
        cout << "EMPTY\n";
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

    // cin >> t;
    for (int testNo = 1; testNo <= t; testNo++)
    {
        solve2(testNo);
        cout << endl;
    }

    return 0;
}