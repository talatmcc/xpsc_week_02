#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    map <int , int> mp;
    for(int i=0 ; i<n; i++){
        int x;
        cin>>x;
        arr[i] =x;
        mp[x]++;
    }
    for( auto pair : mp ){
        if(pair.second == 1){
            cout<<pair.first<<endl;
        }
    }
    return 0;
}