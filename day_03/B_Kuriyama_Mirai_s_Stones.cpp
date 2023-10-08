#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    vector <int> cost(n);
    vector <long long int> preSum(n);
    vector <long long int> preSumCost(n , 0);

    long long int sum = 0;
    for( int i = 0 ;i< n ; i++){
        int x;
        cin>>x;
        arr[i] = x;
        cost[i] = x;
        sum += x;
        preSum[i] = sum;       
    }
    
    sort(cost.begin(), cost.end());
    // for( int i : cost ){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    long long int sumCost = 0;
    for( int i = 0 ;i< n ; i++){
        sumCost += cost[i];
        preSumCost[i] = sumCost;
        // cost[i] = sum;
    }
    // for( int i : preSumCost ){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    int m;
    cin>>m;
    while(m--){
        int type,l,r;
        cin>>type>>l>>r;
        r--;
        l--;
        if( type == 1 ){
            if( l == 0 ){
                cout<<preSum[r]<<endl;
            }
            else{
                cout<<preSum[r] - preSum[l-1]<<endl;
            }
        }
        else if( type == 2 ){
            if( l == 0 ){
                cout<<preSumCost[r]<<endl;
            }
            else{
                cout<<preSumCost[r] - preSumCost[l-1]<<endl;
            }
        }
    }
    return 0;
}