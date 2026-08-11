#include <bits/stdc++.h>
using namespace std;

// Typedefs
using ll = long long;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Fast Input Reading (reading all tokens at once)
    vector<string> input_data;
    string token;
    while (cin >> token)
    {
        input_data.push_back(token);
    }

    if (input_data.empty())
        return 0;

    int n = stoi(input_data[0]);
    int ptr = 1;

    for (int i = 0; i < n; i++)
    {
        ll a = stoll(input_data[ptr++]);
        ll b = stoll(input_data[ptr++]);
        cout << a * b << "\n";
    }

    return 0;
}