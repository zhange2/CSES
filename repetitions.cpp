#include <iostream>
using namespace std;
#define ll long long
int main() {
    ll n, total=0, max=0;
    string s;
    cin>>s;
    n = s.length();
    for (int i=1;i<n;i++) {
        if (s[i] == s[i-1]) {
            total++;
            if (total>max) max = total;
        }
        else total = 0;
    }
    cout<<max+1;
}