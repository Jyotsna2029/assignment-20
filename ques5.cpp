// Check if the given array is almost sorted. (elements are at-most one position away)
#include<iostream>
using namespace std; 
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    int arr[n];
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }

    // sorted array
    for(int  i = 0 ;  i<n-1; i++){
        if(arr[i]>arr[i+1]){//swap
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    // check if array is almost sorted
    bool flag = true;
    for(int  i = 0 ; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag == true){
        cout<<"almost sorted";
    }
    else{
        cout<<"not almost sorted";
    }
}