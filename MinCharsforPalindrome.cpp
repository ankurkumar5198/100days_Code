string rev = s; 
        reverse(rev.begin(), rev.end()); 
        string complete = s + '$' + rev; 

        int n = complete.length();
        int i = 0, j = 1;
        vector<int> helperArr(n, 0); 

      
        while (j < n) {
            if (complete[i] == complete[j]) {
                helperArr[j++] = ++i; 
            } else if (i != 0) {
                i = helperArr[i - 1]; 
            } else {
                j++; 
            }
        }

        // The LPS value at the end tells us the length of the longest palindrome suffix
        int longest_palindrome_suffix = helperArr[n - 1];

        // The result is the number of characters to be added at the beginning
        return s.length() - longest_palindrome_suffix;
