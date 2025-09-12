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
  // Finding the smallest missing positive number in an array
    cout<<"Finding the smallest missing positive number in an array"<<endl;
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if (arr[i]!=i+1){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}