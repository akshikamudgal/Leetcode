class Solution {
public:
    int mySqrt(int x) {
    int start = 0;
        int end = x;
        long long int mid;
        long long int square;
        while(start <= end){
            mid = (start + end) / 2;
            square = mid * mid;
            if(square == x) return mid;
            if(square < x) start = mid + 1;
            else end = mid - 1;
        }
        return start - 1;
    }
};