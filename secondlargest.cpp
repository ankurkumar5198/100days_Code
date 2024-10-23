#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

int largest(int arr[],int n){
    int largest = arr[0];
    for(int i = 0;i < n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int secondLargest(int arr[],int n){
    int second = -1;
    for(int i = 0;i<n;i++){
        if(arr[i] > second && arr[i]!=largest(arr,n)){
            second = arr[i];
        }
    }
    return second;
}

int sLarge(int arr[],int n){
    //optimal appraoch
    int large = arr[0];
    int slarge = -1;
    for(int i = 0;i<n;i++){
        if(arr[i] > large){
            slarge = large;
            large = arr[i];
        }
        else if(arr[i] < large && arr[i] > slarge){
            slarge = arr[i];
        }
    }
    return slarge;
}
int main(){
    /*
    int n ;
    cin>>n;
    int arr[n];
    for(int i  = 0;i<n;i++){
        int num;
        cin>>num;
        arr[i]=num;
    }
    printarray(arr,n);
    cout<<"largest element is : "<<largest(arr,n)<<endl;
    cout<<"Second largest element is : "<<sLarge(arr,n)<<endl;
    */
   int n = 10;
   int y = ++n;
   int z = n++;
   cout<<"y = "<<y<<" , z = "<<z<<endl;
   cout<<y<<" "<<z;

}