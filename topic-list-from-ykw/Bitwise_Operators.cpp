// #include <bits/stdc++.h>
// using namespace std;
// // clang-format off
// // Typedefs & Defines
// using ll                            = long long;
// using ld                            = long double;
// using vi                            = vector<int>;
// using vll                           = vector<ll>;
// using pii                           = pair<ll, ll>;
// using vpll                          = vector<pii>;

// #define elif                        else if
// #define f0(i, n)                    for (ll i = 0; i < (n); i++)
// #define f1(i, n)                    for (ll i = 1; i <= (n); i++)

// #define all(x)                      (x).begin(), (x).end()
// #define rall(x)                     (x).rbegin(), (x).rend()
// #define len(a)                      ((int64_t)(a).size())
// #define ff                          first
// #define ss                          second
// #define pb                          push_back

// #define YES                         cout << "YES" << endl
// #define NO                          cout << "NO" << endl
// #define Yes                         cout << "Yes" << endl
// #define No                          cout << "No" << endl
// #define yes                         cout << "yes" << endl
// #define no                          cout << "no" << endl

// #define min_arr(a, n)               *min_element(a, a + n)
// #define max_arr(a, n)               *max_element(a, a + n)
// #define sum_arr(a, n)               accumulate(a, a + n, 0LL)

// #define min_vec(v)                  *min_element(all(v))
// #define max_vec(v)                  *max_element(all(v))
// #define sum_vec(v)                  accumulate(v.begin(), v.end(), 0LL)

// #define uniq_vec(v)                 (v).erase(unique((v).begin(), (v).end()), (v).end())
// #define count_vec(v, x)             count(v.begin(), v.end(), x)
// #define find_vec(v, x)              (find(v.begin(), v.end(), x) - v.begin())
// #define replace_vec(v, l, r, old_val, new_val) replace(v.begin() + l, v.begin() + r + 1, old_val, new_val)
// #define fill_vec(v, l, r, x)        fill(v.begin() + l, v.begin() + r + 1, x)

// template<typename dataType>
// inline dataType abs(dataType k) {if (k >= 0) return k; else return (-k);}
// template<typename dataType>
// inline bool isEqual(dataType a, dataType b) {return (abs((dataType)(a-b)) < 1e-9);}
// // ############ ---- Input Functions ---- ############------------
// #define inin(n)                      ll n; cin >> n
// #define insr(s)                      string s; cin >> s
// #define inch(c)                      char c; cin >> c
// #define inin2(a,b)                   ll a,b; cin >> a >> b
// #define inarr(arr,n)                 ll arr[n]; f0(t_ind, n) cin >> arr[t_ind]
// #define varr(v, n)                   vll v(n); f0(i, n) cin >> v[i]
// template <typename... T> //--------------- multiple variable input
// void invr(T &...args)
// {                         //-------------- int x, y, z;
//     (cin >> ... >> args); // ------------- invr(x, y, z);
// } //---------------------------------------------------------------
// vector<int> inlt(ll n) //------------- List int input
// {
//     vector<int> arr(n);         //----- int size = 5;
//     for (ll i = 0; i < n; i++) //----- vector<int> a = inlt(size);
//         cin >> arr[i];
//     return arr;
// } //---------------------------------------------------------------
// // ############ --------- Constants --------- ############
// const ll MOD = 1e9 + 7;
// const ll INF = 1e18;
// // ############ ------ Useful Funtions ------ ############

// // clang-format on
// // ############ ---- Main Solve Function ---- ############
// void solve(int testNo)
// {
//     inin2(n, k);
//     ll m_and = 0, m_or = 0, m_xor = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i + 1; j <= n; j++)
//         {
//             ll t_and = (i & j), t_or = (i | j), t_xor = (i ^ j);
//             if (t_and > m_and && t_and < k)
//             {
//                 m_and = t_and;
//             }
//             if (t_or > m_or && t_or < k)
//             {
//                 m_or = t_or;
//             }
//             if (t_xor > m_xor && t_xor < k)
//             {
//                 m_xor = t_xor;
//             }
//         }
//     }
//     cout << m_and << endl
//          << m_or << endl
//          << m_xor;
// }

// void solve2(int testNo)
// {
//     // cout << "Case #" << testNo << ": ";
// }

// void solve3(int testNo)
// {
//     // cout << "Case #" << testNo << ": ";
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;

//     // cin >> t;
//     for (int testNo = 1; testNo <= t; testNo++)
//     {
//         solve(testNo);
//         cout << endl;
//     }

//     return 0;
// }

// c code for submission,

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k)
{
    int m_and = 0;
    int m_or = 0;
    int m_xor = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int c_and = i & j;
            int c_or = i | j;
            int c_xor = i ^ j;

            if (c_and > m_and && c_and < k)
            {
                m_and = c_and;
            }

            if (c_or > m_or && c_or < k)
            {
                m_or = c_or;
            }

            if (c_xor > m_xor && c_xor < k)
            {
                m_xor = c_xor;
            }
        }
    }

    printf("%d\n%d\n%d\n", m_and, m_or, m_xor);
}

int main()
{
    int n, k;

    // Read input values for n and k
    scanf("%d %d", &n, &k);

    // Call the function
    calculate_the_maximum(n, k);

    return 0;
}