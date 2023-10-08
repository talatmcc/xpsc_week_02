#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int count = 0;
    while( n != 0){
        n /= k;
        count ++;
    }
    cout<<count;
    return 0;
}