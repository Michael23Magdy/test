#include<iostream>
using namespace std;

long long fibo(int n, long long arr[]){
    if (arr[n]==-1)
        if (n<=1)
            arr[n]= n;
        else 
            arr[n]= fibo(n-1,arr) + fibo(n-2,arr);
    
    return arr[n];
}

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;

        long long arr[n+1];

        for (int i = 0; i < n+1; i++)
            arr[i] = -1;

        long long res = fibo(n , arr);
        cout<<res<<'\n';
        
    }
    




    return 0;
}