#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while( t-- ){
        int n;
        cin>>n;
        int arr[n];
        int sum = 0 ;
        for( int i = 0; i<n ; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        int min = INT_MAX;

        for( int i = 0 ; i<n ; i++){
            if( arr[i] < min ){
                min =arr[i];
            }
        }
        int val = min*n;
        int ans = sum -val;
        cout<<ans<<endl;

    }
    return 0;
}