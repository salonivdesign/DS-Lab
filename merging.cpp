#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter size of first array:";
    cin>>n;
    cout<<"Enter size of second array:";
    cin>>m;
    int arr1[n],arr2[m];
    cout<<"Enter elements of first array:";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of second array:";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int merge[n+m];
    for(int i=0;i<(n+m);i++){
        if(i<n){
            merge[i]=arr1[i];
        }
        else{
            merge[i]=arr2[i-n];
        }
    }
    cout<<"Merged array is:"<<endl;
    for(int i=0;i<(n+m);i++){
        cout<<merge[i]<<endl;
    }
    return 0;
}