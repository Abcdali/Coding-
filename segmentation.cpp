// #include <cmath>
#include <cstdio>
// #include <vector>
#include <iostream>
// #include <algorithm>
using namespace std;


int main() {
    int r,q,n_v;
    int *arr[r];
    
    cin>>r>>q;
    for(int i=0;i<r;i++)
    {
        cin>>n_v;
        arr[i]=new int[n_v];
        for(int j=0;j<n_v;j++)
    {
        cin>>arr[i][j];
    }
    }
    for(int i=0;i<q;i++){
        int val1,val2;
       cin>>val1>>val2;
       cout<<arr[val1][val2]<<endl;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}


