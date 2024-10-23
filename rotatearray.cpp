#include<bits/stdc++.h>
using namespace std;

//Question is to rotate the elements of a queue in clock wise direction
void reverse(vector<int> &arr,int s,int e){
    while(s < e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }

}

void rotate(vector<int> &arr,int d){
    // d is the number of steps.
    int n = arr.size();
    d = d % n;//very important step while rotating the array.
    reverse(arr,0,d-1);
    reverse(arr,d,d-1);// rotate the first element side
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main(){
    int n; 
    cin>>n;
    vector<int> a(n);
    for(int i = 0;i<n;i++){
        int num;
        cin>>num;
        a[i]=num;
    }
    cout<<"Enter number of steps to rotate"<<endl;
    int d;
    cin>>d;
    cout<<"array initially"<<endl;
    for(int i = 0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    rotate(a,d);
    cout<<"array after rotating counter clockwise direction "<<endl;
    for(int i = 0;i<n;i++){
        cout<<a[i]<<' ';
    }
}