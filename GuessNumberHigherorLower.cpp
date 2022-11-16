// We are playing the Guess Game. The game is as follows:

// I pick a number from 1 to n. You have to guess which number I picked.

// Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

// You call a pre-defined API int guess(int num), which returns three possible results:

//     -1: Your guess is higher than the number I picked (i.e. num > pick).
//     1: Your guess is lower than the number I picked (i.e. num < pick).
//     0: your guess is equal to the number I picked (i.e. num == pick).

// Return the number that I picked.

 

// Example 1:

// Input: n = 10, pick = 6
// Output: 6



class Solution {
public:
    int guessNumber(int n) {
        return binarySearch(0,n); 
    }
    int binarySearch(int lower,int upper){
        if(lower==upper) return upper;
        int mid=lower+(upper-lower)/2;
        int temp=guess(mid);
        if(upper-lower==1){
            if(temp==0) return lower;
            return upper;
        }

        if(temp==0) return mid;
        
        if(temp==-1) return binarySearch(lower,mid);
        if(temp==1) return binarySearch(mid,upper);
        return 0;
    }
};
