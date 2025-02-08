#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
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

    int rows = n; 
    for (int a = rows; a > 0; --a) {
        for (int b = 0; b < rows - a; ++b) {
            cout << " ";
        }

        for (int k = 0; k < (2 * a - 1); ++k) {
            cout << "*";
        }
        cout << endl;
    }
}
   