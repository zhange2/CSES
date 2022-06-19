#include <bits/stdc++.h>
using namespace std;
const int modulo = 1e9 + 7;
int main()
{
    long long n, ans;
    cin>>n;
    long long arr[n+1] = {0};
    for (int i=1;i<=n;i++) {
        arr[0] = 1;
        for (int x=1;x<=6;x++) {
            if (x > i) break;
            arr[i] = (arr[i] + arr[i-x]) % modulo;
        }
    }
    
    cout<<arr[n]<<"\n";
}
