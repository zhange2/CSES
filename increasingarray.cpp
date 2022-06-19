#include <iostream>
using namespace std;
#define ll long long
int main() {
    ll n, arr[200001], total = 0, temp;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for (int i=1;i<n;i++) {
        temp = 0;
        if (arr[i] < arr[i-1]) {
            temp = arr[i - 1] - arr[i];
            arr[i] += temp;
            total += temp;
        }
    }

    cout<<total;
}