#include<iostream>
using namespace std;
void duplicateArray(int arr[], int size){
    cout<<"DublicateArray is :";
    for(int i=0;i<size;i++){
        for(int j=i+1 ; j<size;j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
}
int main(){
    int arr[]={1,3,4,5,5,6,6,7,8,8};
    int size = sizeof (arr)/sizeof(arr[0]);
    duplicateArray(arr,size);

}