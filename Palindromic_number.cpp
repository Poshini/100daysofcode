class Solution {
public:
    bool isPalindrome(int j) {        
int carry;
long sum = 0;
int x = j;
while(x != 0 ){
carry = x%10;
x = x/10;
sum = carry + sum*10;
}
if(sum > pow(-2,31) && sum < pow(2,31)-1 && j>=0){
    if(sum==j)
        return true;
    else
        return false;
}
return 0;
    }
};
