#include<bits/stdc++.h>
using namespace std;
int main() {
    //push element in a stack using array operation
    int n1,el,pos;
    cin>>n1;
    int arr[n1+1];
    for(int i=0; i<n1;i++){
        cout<<"Enter element "<<i<<":";
        cin>>arr[i];
    }
    cout<<"Enter element to be added:";
    cin>>el;
    cout<<"Enter position:";
    cin>>pos;
    for (int i=n1-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=el;
    for(int i=0;i<=n1;i++){
        cout<<arr[i];
    }
    
// Declaring a  vectir and calculating the sum of its elements
    
    int n;
    cout<<"Enter size of vector:";
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sum=0;
        
    for (int i=0;i<n;i++){
        sum+=v[i];
    }
    cout<<sum;
    return 0;
}
