// Let the GCD-ness of a positive integer 
// k be the number of elements among A ,An 
// that are divisible by k.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for( int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    vector <int> freq(1001,0);
    for( int i = 2 ; i<= 1000 ; i++ ){
        int count = 0;
        for( int j = 0 ; j<n ; j++){
            if( arr[j] % i == 0 ){
                count ++;
            }
        }
        freq[i] = count;
    }
    int max = INT_MIN;
    for(int i : freq){
        if( i > max ){
            max = i;
        }
    }
    int ans = 0;
    for( int i = 2; i<1001; i++){
        if(freq[i] == max ){
            ans = i;
        }
    }
    cout<<ans<<endl;

    return 0;
}