#include<bits/stdc++.h>
using namespace std;

/* USE of classes. OOPS concept nahi aata. abhi seekhenge.*/
/*
Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.
*/
int myAtoi(string s) {
        int i=0;
        int sign=1;
        long ans=0;
        while(i<s.length() && s[i]==' ')
            i++;
        if(s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(s[i]=='+')
            i++;
        while(i<s.length())
        {
            if(s[i]>='0' && s[i]<='9')
            {
                ans=ans*10+(s[i]-'0');
                if(ans>INT_MAX && sign==-1)
                    return INT_MIN;
                else if(ans>INT_MAX && sign==1)
                    return INT_MAX;
                i++;
            }
            else
                return ans*sign;
        }
        return (ans*sign);
    }


int main(){
    char ch = '7';
    int a = ch - '0';//character to integer conversion is easy using this.
    //cout<<a<<endl;/*
    //cout<<a/2;*/
    //cout<<'0'/2<<endl;// ASCII value of '0' is 48 so for integer operations it will take ASCII VAl ; 48/2 = 24
    
    //Integer to String: 
    int num = 7;
    char c = num + '0';
    //cout<<"Equivalent conversion" <<" "<<ch+'A'<<endl;
    //cout<<typeid(ch).name()<<endl;

    int abc = 'a';//stores ASCII int value of 'a'
    //cout<<abc<<endl;//output : 97 ASCII

    char def = 94;//since datatype is character and you entered 94 which is ASCII value of caret ^ ,
    //it will print ^
    //cout<<def<<endl;

    //int abcd = "hello";//invalid because compiler does not know how to store string literal as integer.
    //only characters have integer ASCII value.
    
    char cde = 122;//prints ASCII value assigned to 122 which is 'z'.
    //cout<<cde;

    string str;
    cin>>str;
    int conversion = myAtoi(str);
    cout<<conversion<<endl;

}