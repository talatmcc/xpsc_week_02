#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while( t-- ){
        int n;
        cin>>n;
        int arr[n];
        map <int , int> mp;
        for( int i = 0; i<n ; i++){
            cin>>arr[i];
            mp[arr[i]] ++ ;
        }
        int count = 0;
        for( auto pair : mp ){
            
            if( pair.second >= 3){
                cout<<pair.first<<endl;
                break;
            }
            count++;
        }
        if(count == mp.size()){
            cout<<"-1"<<endl;
        }
    }
    return 0;
}