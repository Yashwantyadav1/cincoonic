#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==1 || i==2){
            cout<<" ";
        }
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}