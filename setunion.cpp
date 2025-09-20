#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    
    int n1,n2;
    cout<<"enter the size of set1:>>"<<endl;
    cin>>n1;
    cout<<"enter the size of set2:>>"<<endl;
    cin>>n2;
    vector<int>a(n1),b(n2),c(n1+n2);
    cout<<"enter the elements of set1:>>"<<endl;
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    
    cout<<"enter the elements of set2:>>"<<endl;
    for(int j=0;j<n2;j++){
        cin>>b[j];
    }
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else if(b[j]<a[i]){
            c[k]=b[j];
            j++;
            k++;
        }
        else{
            c[k]=a[i];
            i++;
            j++;
            k++;
        }
        
    }
    while(i<n1){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n2){
        c[k]=b[j];
        j++;
        k++;
    }
    cout<<"Union of the two sets is:>>"<<endl;
    for(int i=0;i<k;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}  

