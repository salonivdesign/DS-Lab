#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    
    int n1,n2;
    cout<<"enter the size of set1:";
    cin>>n1;
    cout<<"enter the size of set2:";
    cin>>n2;
    vector<int>a(n1),b(n2),c(n1+n2);
    cout<<"enter the elements of set1:";
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    
    cout<<"enter the elements of set2:>>"<<endl;
    for(int j=0;j<n2;j++){
        cin>>b[j];
    }
    int k=0;
    for (int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if (a[i]==b[j]){
                c[k]=a[i];
                k++;
            }
        }
    }
    cout<<"Intersection of sets are:";
    for (int i=0;i<k;i++){
        cout<<c[i]<<" ";
    }
}