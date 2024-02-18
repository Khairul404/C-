#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"Enter The Number of Row: ";
    cin>>n;
    cout<<"Enter The Number of Column: ";
    cin>>m;

    for(int i= 0; i< n; i++){
        for(int k=0; k<i; k++)
        {
            cout<<" ";
        }
        
        for(int j=i; j<m; j++)
        {
            cout<<"*";
        }
        
        cout << endl;
    }
}