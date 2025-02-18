#include <iostream>
using namespace std;
void dublicateArray(int arr[], int n){
    cout<<"Dublicate element: ";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i] <<" ";
                break;
            }
        }
    }
}
int main(){
    int arr[]={1,2,4,4,5,6,6,7,8,7};

    int n=sizeof(arr)/sizeof(arr[0]);
    dublicateArray(arr,n);

}