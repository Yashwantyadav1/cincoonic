#include<iostream>
using namespace std;
void maxminElement(int arr[] , int size){
    int maxElement =arr[0];
    int minElement =arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>maxElement){
            maxElement=arr[i];
        }
        if(arr[i]<minElement){
            minElement=arr[i];
        }
        
    }
    cout<<minElement<<"minimum Element:";
    cout<<maxElement<<"maximum Element: ";

}
int main(){
    int arr[]={1,66,77,44,8,9,};
    int size= sizeof(arr)/sizeof(arr[0]);
    maxminElement(arr,size);

}