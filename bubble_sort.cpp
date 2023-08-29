#include<iostream>
using namespace std;
void Bubble(int arr[],int n){
    int b=0;
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}
int main(){
    int arr[]={9,4,1,5,2};
    Bubble(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}