vector<vector<string>> anagrams(vector<string>& arr) {
     
        map<string, vector<string>> mp;

        // Iterate through each string in the array
        for (auto i : arr) {
            string temp = i; // Copy the string
            sort(temp.begin(), temp.end()); // Sort the string to create a common key
            mp[temp].push_back(i); // Group the original string under its sorted key
        }

        vector<vector<string>> res; // Initialize a vector to store the result

        // Extract grouped anagrams from the map
        for (auto i : mp) {
            res.push_back(i.second); // Add each group of anagrams to the result
        }

        return res;
    }
