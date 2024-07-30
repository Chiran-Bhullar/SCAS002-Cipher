// Arrays 

#include<iostream>
using namespace std;

int main(){
    
    int arr[5] = {2, 3, 5, 7, 9};
    
    // int item -> Local Variable 
    for(int item : arr){
        cout<<item<<" ";
    }
    
    cout<<endl;
    
    
    //Print value by index
    
    cout<<arr[0] <<endl;

    // Change value of any element by declaring new value with index.
    
    arr[0] = 20;
    
    cout << "Revised Array : " << endl;
    
    for(int item : arr){
        cout<<item<<" ";
    }
    cout<<endl;
    
    
    //Taking elements in array through user input.
    
    int arr1[5];
    
    cout << "Enter the elements : "<<endl;
    
    for(int i = 0; i < 5; i++){
        cin>>arr1[i];
    }
    
    for(int item : arr1){
        cout<<item<<" ";
    }
    
    // Sum of array
    
    int sum;
    sum = 0;
        
    for(int i = 0; i<5; i++){
        sum = sum + arr1[i];
    }
    cout << sum << endl;
    
    int avg = sum/5;
    cout<<"Average is : "<<avg;
}