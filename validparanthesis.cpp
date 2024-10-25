#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char> st;
    int n = s.length();
    for(int i = 0; i < n;i++){
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else{
            if(!st.empty()){
                char top = st.top();
                if((ch==')' && top =='(') || 
                (ch==']' && top =='[') ||
                (ch=='}' && top =='{')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(st.empty()){
        return true;
    }
    return false;
}
int main(){
    string s;
    getline(cin,s);//take the whole line as input.
    //cout<<s<<endl;
    //string s2;
    //cin>>s2;
    //cout<<s2<<endl;
    //difference between cin and getline is that cin terminates whitespace character and does not take input after that.
    //getline includes whitespace character with whole line as input.

    bool ok = isValid(s);
    cout<<boolalpha;//used to return bool value as true or false instead of 0 or 1.
    cout<<ok;
}