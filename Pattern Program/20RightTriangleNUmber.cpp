#include<iostream>
using namespace std;

int main(){

    int n , m;
    cout<<"Enter The Number Of Row : ";
    cin>>n;
    cout<<"Enter The Number Of Column : ";
    cin>>m;

    for(int i = 1; i<=n ; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }

    
}