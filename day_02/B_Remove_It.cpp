#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    vector <int> v;
    for( int i = 0 ; i<n ; i++ ){
        int y;
        cin>>y;
        arr[i] = y;
        if( y != x  ){
            v.push_back(y);
        }
    }
    for( int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    

    return 0;
}