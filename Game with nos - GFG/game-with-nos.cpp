// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


int* game_with_number(int arr[], int n);

int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        int *arr2;
        
        arr2 = game_with_number(arr, n);
        for(int i = 0;i < n; i++)
            cout << arr2[i] << " ";
        
        cout << endl;
        
    }

}
// } Driver Code Ends


int* game_with_number(int arr[], int n)
{
    
    // Complete the function
    int last = arr[n-1];
    for(int i=0;i<n-1;i++){
        int now = arr[i];
        int agla = arr[i+1];
        int xoro = now xor agla;
        arr[i] = xoro;
    }
    return arr;
}
