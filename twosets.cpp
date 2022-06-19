#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxN = 1e6;
int main() {
    int n,sum=0,target=0,target1=0,target2=0;
    vector<int>v1, v2;
    cin>>n;
    for (int i=1;i<=n;i++) {
        target += i;
    } 
    
    if (target%2==0) {
        cout << "YES" << "\n";
        if (target%4==3) { //n = 12
        	target1 = target/4; //39/2 = 19 always odd 
        	target2 = target/4 + 1; //39/2+1 = 20 always even
        	v1.push_back(target1/2);
        	v1.push_back(target1/2 + 1);
			v1.push_back(target)

        	
		}
		else {
			target1 = target/4;
			target2 = target/4;
		}
        // 55 66 78 91
        //78/2 = 39 : 1
        
        cout << v1.size() << "\n";
        for (int i = 0; i < v1.size(); i++)
        {
            cout << v1[i] << " ";
        }
        cout << v2.size() << "\n";
        for (int i = 0; i < v2.size(); i++)
        {
            cout << v2[i] << " ";
        }
    }
    else {
        cout<<"NO"<<"\n";
    }
    
}
