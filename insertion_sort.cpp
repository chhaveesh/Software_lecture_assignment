#include <iostream>
using namespace std;
void insertion(int arr[],int n){
    for(int i = 1; i < n; i++){
        int k = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > k){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = k;
        for(int l = 0; l < 5; l++){
        cout<< arr[l] <<" ";
    }
    cout<<endl;
    }
    cout<<endl;
}
int main(){
    int arr[] = {9,4,1,5,2};
    insertion(arr,5);
    for(int i = 0; i < 5; i++){
        cout<< arr[i] <<" ";
    }
}