int maxProduct(vector<int> &arr) {
        // Your Code Here
        if (arr.empty()) return 0;
            int current_max = arr[0];
            int current_min = arr[0];
            int max_product = arr[0];
        
            for (size_t i = 1; i < arr.size(); ++i) {
                int num = arr[i];
        
                // If the number is negative, swap current_max and current_min
                if (num < 0) {
                    swap(current_max, current_min);
                }
        
                // Update current_max and current_min
                current_max = max(num, num * current_max);
                current_min = min(num, num * current_min);
        
                // Update the overall max_product
                max_product = max(max_product, current_max);
            }
        
            return max_product;
 
    }
