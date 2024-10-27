bool isToepliz(vector<vector<int>>& mat) {
    // code here
    //diagonal element same rhna chayeih
    //nxn matrix me har row ka diagonal element find karne ke liye ek variable
    stack<int> diag;// diagonal elements ka ek stack lena hoga
    //wo diagonal hai ki nahi wo check karo.
    //uska condition - 
    
    //diagonal hone ke liye uska position as of row and column same hona chayeih.
    for(int i=1;i<mat.size();i++){
        for(int j=1;j<mat[0].size();j++){
            if (i==j){
                diag.push(mat[i][j]);
            }
        }
    }//condition complete.
    
    int t=diag.top();
    //traversal jo hoga wo row wise hoga
    while(diag.empty()==true){
        if(diag.top()==t){
            diag.pop();
            continue;
        }
        else{
            return false;
        }
        
    }
    return true;
    //at the end check karenege ki ye diag element same hai ya nahi kaise??
    //
}// my code. 0/176 test cases passed.