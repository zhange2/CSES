#include <iostream>
using namespace std;
#define ll long long
const int modulo = 1e9 + 7;
int main() {
    int n,ans=1;
    cin>>n;
    for (int i=0;i<n;i++) {
        ans*=2;
        ans%=modulo;
    }
    cout<<ans<<"\n";

} 