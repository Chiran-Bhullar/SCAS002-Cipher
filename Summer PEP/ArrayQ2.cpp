//Arrays

#include<iostream>
using namespace std;

int getmax(int arr[], int size){
    int max = arr[0];
    for(int i = 0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;
    
    return 0;
}

int getMin(int arr[, int size]){
    int min = INT_MAX;
    for(int i =0; i < size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int arr[5] = {0, 3, 6, 9, 12};
    int size = 5;
    cout<<getmax(arr, size);
    
}