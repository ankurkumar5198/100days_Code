#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arrays = {{1,2,3},{4,5},{2,2,3}};
    vector<int> num = {1,2,3,4,5};
    for(auto i : arrays){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}