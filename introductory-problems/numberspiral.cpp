#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll ans(pair<ll, ll> input)
{
    long long z = max(input.first, input.second);
    return z % 2 == 0 ? z * z - (input.second - input.first + z - 1) : z * z - (input.first - input.second + z - 1);
}
int main()
{
    int n;
    cin >> n;
    pair<ll, ll> input[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> input[i].first >> input[i].second;
        cout << ans(input[i]) << endl;
    }
}
