#include<iostream>
using namespace std;
void maxminElement(int arr[],int n){
    int maxElement = arr[0];
    int minelement = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxElement){
            maxElement = arr[i];
        }
        if(arr[i]<minelement){
            minelement = arr[i];
        }
    }
    cout<<"maximum : " <<maxElement<<endl;
    cout<<"minimum : "<<minelement<<endl;
}
int main(){
    int arr[]={12,34,55,3,6,8,9};
    int n =sizeof(arr)/sizeof(arr[0]);
    maxminElement(arr,n); 

}
