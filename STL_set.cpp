#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    int n;cin>>n;
    while(n--){
        int x;cin>>x;
        s.insert(x);//O(logN)
    }
    cout<<s.count(1)<<endl;
    s.count(1)?cout<<"Yes"<<endl:cout<<"No"<<endl;
    for(auto it = s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}
//Sorting
//remove duplicates
//count