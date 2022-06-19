#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
#define ll long long
ll n, x[100001], y[100001];
ll solve(ll x, ll y) {
    ll maxValue = max(x,y) * max(x,y);
    ll minValue = (max(x, y) - 1) * (max(x, y) - 1) + 1;
    ll squareroot = sqrt(minValue - 1);
    if (squareroot % 2 == 0)
    {
        if (max(x,y) == x) {
            return maxValue - y + 1;
        }
        else return minValue + x - 1;
    }
    else {
        if (max(x,y) == x) {
            return minValue + y - 1;
        }
        else return maxValue - x + 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for (ll i=0;i<n;i++) {
        cin>>y[i]>>x[i];
    }
    for (ll i=0;i<n;i++) {
        ll temp = solve(x[i],y[i]);
        cout<<temp<<endl;
    }

}