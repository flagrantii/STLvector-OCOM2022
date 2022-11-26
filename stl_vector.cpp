#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n,m,a;
    char cmd;
    cin>>n;
    while(n--) {
        v.clear();
        cin>>m;
        while(m--) {
            cin >> cmd;
            if(cmd=='a') {
                cin >> a;
                v.push_back(a);
            }
            if(cmd=='b'){
                sort(v.begin(),v.end());
            }
            if(cmd=='c'){
                reverse(v.begin(),v.end());
            }
            if(cmd=='d'){
                cout<<v.size()<<" ";
            }
            if(cmd=='e'){
                for(int i=0;i<v.size();i++){
                    cout<<v[i]<<" ";  
                }
            }
            if(cmd=='f'){
                sort(v.begin(),v.end(), greater<int>());
            }
        }
    }
}
