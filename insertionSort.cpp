#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> nums,int n){
    for(int i = 0 ; i  < n;i++){
        int j = i; 
        while(j > 0 && nums[j-1]>nums[j]){
            swap(nums[j-1],nums[j]);
            j--;
        }
    }
    for(int i = 0 ; i< n;i++){
        cout<<nums[i]<<' ';
    }

}

int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i = 0 ; i < n; i++){
        int num;
        cin>>num;
        vec[i] = num;
    }

    cout<<"Before Sorting: ";
    for(int i = 0 ; i< n;i++){
        cout<<vec[i]<<' ';
    }
    cout<<endl;
    cout<<"After Sorting : ";
    insertionSort(vec,n);

}
