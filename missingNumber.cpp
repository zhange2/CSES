#include <iostream>
using namespace std;
int main() {
    int n, total = 0, temp = 0, missing, arr[200001];
    cin>>n;
    for (int i=0;i<n-1;i++) {
        cin>>arr[i];
    }
    for (int i=n;i>0;i--) {
        total += i;
    }
    for (int i=0;i<n-1;i++) {
        temp += arr[i];
    }
    missing = total-temp;
    cout<<missing;
}