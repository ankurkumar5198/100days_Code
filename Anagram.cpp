bool areAnagrams(string& s1, string& s2) {
        // Your code here
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        for(int i= 0; i < s1.length() || i < s2.length();i++){
            if(s1[i]!=s2[i]){
                return false;
            }
        }
        return true;
    }
