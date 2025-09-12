#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    int n, i;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter elements of sorted array: ";
    for (i=0;i<n;i++) {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter element to be inserted: ";
    cin>>x;
    arr.push_back(0);  

    for (i=n-1;i>=0 && arr[i]>x;i--) {
        arr[i+1]=arr[i];
    }
    arr[i+1]=x;

    cout<<"Array after insertion is: ";
    for(i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

