#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int cnt = 1;
    cin>>s; 
    sort(s.begin(), s.end());
    // cout<<s<<'\n';
    while (next_permutation(s.begin(), s.end())) {
        // cout<<s<<'\n';
        cnt++;
    }
    cout<<cnt<<'\n';
    sort(s.begin(), s.end());
    cout<<s<<'\n';
    while (next_permutation(s.begin(), s.end()))
    {
        cout<<s<<'\n';
        // cnt++;
    }
}