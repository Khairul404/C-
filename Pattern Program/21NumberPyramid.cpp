#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"Enter The Number of Row: ";
    cin>>n;
    cout<<"Enter The Number of Column: ";
    cin>>m;

    for(int i = 1; i<=n; i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j = 1 ;j<=2*i-1;j++){
            cout<<j;
        }
        cout<<endl;

    }
}