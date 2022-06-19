#include <bits/stdc++.h>
using namespace std;
int n;
void move(int n, int start, int mid, int end) {
    if (n == 0) { 
        return;
    }
    move(n-1, start, end, mid);
    cout<<start<<' '<<end<<'\n';
    move(n-1, mid, start, end);
}
int main()
{
    cin>>n;
    cout<<((1<<n)-1)<<'\n';
    move(n, 1, 2, 3);
}