#include<iostream>
using namespace std;
void reverseArray(int arr[],int start,int end){
    while(start<end){
        swap(arr[start] , arr[end]);
            start++;
            end--;
        
    }

}
void leftRotateArray(int arr[] , int size , int k){
    k=k%size;
    reverseArray(arr,0,k-1);
    reverseArray(arr,k,size-1);
    reverseArray(arr,0,size-1);
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,3,5,6,7,8,9};
    int size =sizeof(arr)/sizeof(arr[0]);
    int k=1  ;
    cout<<"original Array";
    printArray(arr,size);
    leftRotateArray(arr,size,k);
    cout<<"left Rotate"<<k<<"poistion:";
    printArray(arr,size);


}