#include<iostream>
using namespace std;

int main(){

    int n , m;
    cout<<"Enter The Number Of Row : ";
    cin>>n;
    cout<<"Enter The NUmber Of Column : ";
    cin>>m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=i; j++){
           if(i==n ||i==1|| j==1 || j==i-m){
            cout<<"*";
           }else{
            cout<<" ";
           }
        }
        cout<<endl;
    }


}