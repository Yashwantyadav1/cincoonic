#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    for(int i=1;i<n+1;i++){
        for(int j=0;j<(n-i);j++){
            cout<<" ";
        }
        for(int k=1;k<((2*i));k++){
            if(k%2==0){
                cout<<"#";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
   for(int a=0;a<3;a++){
        for(int b=0;b<((2*n)-1);b++){
            if(b==0 || b==((2*n)-2)){
                cout<<"*";
            }
            else if(b==n-1 && a==1){
                cout<<"@";
            }
          
            else{
                cout<<" ";
            }
              
        }
        cout<<endl;
   }
    
}