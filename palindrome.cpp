#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int arr[26] = {0}, odd = 0, index=0;
    vector<char>v;
    char middle;
    string s;
    cin>>s;
    for (char c : s) {
        arr[c-'A']++;
    }

    for (int i=0;i<26;i++) {        
        if (arr[i]&1==1) odd++;
    }

    if (odd == 0) {
        for (int i=0;i<26;i++) {
            if (arr[i] > 0) {
                 for (int j=0;j<arr[i]/2;j++) {
                     v.push_back((char)i+'A');
                 }
            }
        }
        for (int i=0;i<v.size();i++) {
            cout<<v[i];
        }
        reverse(v.begin(), v.end());
        for (int i=0;i<v.size();i++) {
            cout<<v[i];
        }
        
    }
    else if (odd == 1) {
        for (int i=0;i<26;i++) {
            if (arr[i] & 1 == 1) {
                middle = (char)i+'A';
                arr[i]--;
            }
            if (arr[i] > 0 && arr[i] % 2 == 0) {
                for (int j=0;j<arr[i]/2;j++) v.push_back((char)i + 'A');
            }
        }
        for (int i=0;i<v.size();i++) {
            cout<<v[i];
        }
        cout<<middle;
        reverse(v.begin(), v.end());
        for (int i=0;i<v.size();i++) {
            cout<<v[i];
        }
    }
    else cout<<"NO SOLUTION"<<"\n";
    

}
