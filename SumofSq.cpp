long sqrtc(int c){
        int low = 0 , e = c ;
        long t = -1;
        while(low <= e){
            long mid = low + (e- low)/2;
            long ans = mid*mid;
            if(ans == c){
                return mid;
            }
            else if(ans > c){
                e = mid - 1;
            }
            else if(ans < c){
                t = mid;
                low = mid + 1;
            
            }
        }
        return t;
    }
    bool judgeSquareSum(int c) {
        long right = sqrtc(c);
        long left = 0 ; 
        while(left <=right){
            long curr_sum = left*left + right*right;
            if(curr_sum == c) return true;
            if(curr_sum < c){
                left++;
            }
            else{
                right --;
            }
        }
        return false;
    }
