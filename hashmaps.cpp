#include<bits/stdc++.h>
using namespace std;

void printHash(unordered_map<int,string> milo){
    for(auto x: milo){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

string isSubset(vector<int> arr1,vector<int> arr2,int n,int m){
    unordered_map<int,int> map1,map2;
    for(int i =0;i < n ; i++){
        map1[arr1[i]]++;// counts frequency of each value in arr1
    }
    for(int j = 0;j < m;j++){
        map2[arr2[j]]++;// counts frequency of elements in arr2.
    }
    for(int k = 0 ;k < m; k++){
        if(map2[arr2[k]] > map1[arr2[k]]){ // It checks freq. of common elements in both maps.
            return "No";
        }
    }
    return "Yes";
}

int main(){
    //HASHMAPS - dictionary of python.

    //hashing - map keys to a specific value.

    unordered_map<int,string> MyMap;

    
    MyMap[0]="Apple"; // insertion of value with 0 as key.

    MyMap.insert({1,"Mango"}); // insertion using insert({}) function takes only 1 argument
    MyMap[2]="Orange";


    //Accessing Elements
    string value = MyMap[0];
    //cout<<value<<endl;
    //int value2 = MyMap[1]; // you can not store a string in integer variable, data type has to be same.

    /* What if i have to access key?
    string value2 = MyMap["Apple"];// cannot access key like this.
    cout<<" Key of Apple : "<<value2<<endl;
    */
    
    //Maps is not straightforward because these data structures are designed 
    //for efficient lookups based on keys, not values

    for(auto pa : MyMap){
        if(pa.second=="Mango"){
            cout<<"Key of "<<pa.second<<" is "<<pa.first;
        }
    }
    cout<<endl;
    auto s=MyMap.at(2);
    cout<<"Third element is "<<s<<endl;

    //Checking for a key
    if(MyMap.find(1)!=MyMap.end()){
        cout<<"Key 1 exists"<<endl;
    }
    if(MyMap.count(2) > 0){
        cout<<"Key 2 exists"<<endl;
    }
    cout<<endl<<endl;
    //Printing hashmaps
    
    
    printHash(MyMap);
    cout<<endl;
    //Removing Elements 
    MyMap.erase(1);
    printHash(MyMap);

    /*

    insert(pair): Inserts a new key-value pair.
operator[]: Accesses or inserts a value associated with a key.
at(key): Accesses the value at a key, throws std::out_of_range if key not found.
find(key): Returns an iterator to the key-value pair if found, otherwise returns end().
erase(key): Removes the element with the specified key.
count(key): Returns 1 if the key is found, otherwise 0.
size(): Returns the number of elements.
clear(): Removes all elements.
empty(): Returns true if the map is empty.
5. Performance Considerations
Time Complexity: Average time complexity for insertion, deletion, and access is O(1), making HashMaps highly efficient.
Load Factor: This determines when the hash map resizes itself. It’s a trade-off between time and space.
Collision Handling: C++'s std::unordered_map uses separate chaining to handle hash collisions.
6. Use Cases
Counting frequencies: Tracking occurrences of words in a text.
Caching: Storing recently accessed data for quick retrieval.
Lookup tables: Storing and retrieving configuration or data mappings.
HashMaps (std::unordered_map) in C++ are versatile and powerful tools for efficient data management when fast access and manipulation are required. 
Understanding their functions, use cases, and performance characteristics helps in writing optimal code.
*/
int n,m;
cout<<"Enter size of arr1 & arr2"<<endl;
cin>>n>>m;

vector<int> arr1(n);
vector<int> arr2(m);

for(int i =0;i<n;i++){
    cin>>arr1[i];
}

for(int i =0;i<m;i++){
    cin>>arr2[i];
}


string output = isSubset(arr1,arr2,n,m);
cout<<"Is arr2 subset of arr1 ? "<<endl<<"Answer : "<<output;




}