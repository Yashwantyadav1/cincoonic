#include<iostream>
using namespace std;
void reverseArray(int arr[] , int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    cout<<endl;
}
void print(int arr[] , int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,3,5,8,9};
    int size = sizeof (arr)/sizeof(arr[0]);
    reverseArray(arr,size);
    print(arr,size);


}