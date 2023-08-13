class Solution {
public:
    int addDigits(int num) {
        if(num==0)
            return 0;
        if(num%9==0)
            return 9;
        return(num%9);
    }
};

//take a number sum
//take remainder and add remainder to sum
//repeat till number becomes 0
// do it for the sum
//repeat till there is single digit number
