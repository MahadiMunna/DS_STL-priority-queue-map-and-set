#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> mp;
    mp.insert({"Sakib Al Hasan",75});
    mp.insert({"Tamim Iqbal",99});
    mp.insert({"Mashrafee",4});
    for(auto it = mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    mp["Mahadi Munna"]=100;
    cout<<mp["Mahadi Munna"]<<endl;
    for(auto it = mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    if(mp["Monir"]) cout<<"Ache";
    else cout<<"Nai";
    return 0;
}