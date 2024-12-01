char nonRepeatingChar(string &s) {
        // Your code here
        //non - repeating characters in s.
        //'$' 
        //geeksforgeeks.
        //use of hashmaps - count the occurrences of each character in the string.
        unordered_map<char,int>gh;
        for(int i=0;i<s.length();i++){
            gh[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(gh[s[i]]==1){
                return s[i];
            }
        }
        return '$';
    }
