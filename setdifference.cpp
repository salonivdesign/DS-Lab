#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n1,n2;
    
    cout<<"Enter size of set 1:";
    cin>>n1;
    cout<<"Enter size of set2:";
    cin>>n2;
    vector<int>a(n1),b(n2),c(n1+n2);
    int k=0;
    cout<<"Enter Elements of set1:";
    for (int i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"Enter Elements of set2:";
    for (int i=0;i<n2;i++){
        cin>>b[i];
    }
    for (int i=0;i<n1;i++){
        int count=0;
        for(int j=0;j<n2;j++){
            if (a[i]==b[j]){
                count++;
                break;
            }
           
        }
        if (count==0){
                 c[k]=a[i];
                 k++;
            }
    }
    cout<<"Difference of sets A-B="<<endl;
    for(int i=0;i<k;i++){
        cout<<c[i]<<" ";
    }
}