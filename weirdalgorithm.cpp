#include <iostream>
using namespace std;
int main() {
    long long n;
    cin>>n;
    cout << n << "\n";
    while (n != 1)
    {
        if (n%2==0) {
            n/=2;
        }
        else if (n%2==1) {
            n = n*3+1;
        }
        cout<<n<<"\n";
    }
}