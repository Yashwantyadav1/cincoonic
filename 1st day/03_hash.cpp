#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j>=(n+1-i);j++){
            cout<<" ";
            for(int j=0;j<(1+(2*i));j++){
                if(i+j%2==0){
                    cout<<" * ";
                }
                else{
                    cout<<" # ";
                }
            }
        }
        cout<<endl;
    }
}