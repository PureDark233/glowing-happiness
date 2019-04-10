class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        if(x==0)
            return true;
        deque<int> stri;
        int i;
        while(x!=0){
            i=x%10;
            stri.push_back(i);
            x=x/10;
        }
        while(stri.size()!=0 && stri.size()!=1){
            if(stri.back()!=stri.front()){
                return false;
            }
            stri.pop_back();
            stri.pop_front();
        }
        return true;
    }
};
