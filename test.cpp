#include<iostream>
using namespace std;

long long fibo(int n){
    //memoization
}

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;

        int arr[n];

        for (int i = 0; i < n; i++)
            arr[i] = -1;

        long long res = fibo(n);
        cout<<res;
        
    }
    




    return 0;
}