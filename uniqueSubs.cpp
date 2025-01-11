int longestUniqueSubstr(string &s) {
    unordered_map<char, int> lastSeen;
    int maxLength = 0; 
    int start = 0;

    for (int i = 0; i < s.length(); i++) {
        if (lastSeen.find(s[i]) != lastSeen.end() && lastSeen[s[i]] >= start) {
            start = lastSeen[s[i]] + 1;
        }

        // Update the last seen index of the character
        lastSeen[s[i]] = i;

        // Update the maximum length
        maxLength = max(maxLength, i - start + 1);
    }

    return maxLength;
