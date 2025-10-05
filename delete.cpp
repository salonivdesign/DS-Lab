#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,pos,i;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++){
        cout<<"Enter ELement:";
        cin>>arr[i];
    }
    cout<<"Enter position at which element is to be removed(0 based indexing):";
    cin>>pos;
    for(i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for (i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}