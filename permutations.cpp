#include <iostream>
using namespace std;
bool solve(int s) {
    if (s < 4 && s!=1) {
        return false;
        }
    else if (s==1) return true;
    else {
        return true;
        }
    }


int main() {
    int n;
    cin>>n;
    if (solve(n)) {
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (int i=1;i<=n;i+=2) {
            cout<<i<<" ";
        }
        
    }
    else cout<<"NO SOLUTION";

}