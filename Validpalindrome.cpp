class Solution {
private :
    bool Valid(char ch){
        if((ch >= 'a' && ch <= 'z')|| (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch<='9')){
            return 1;
        }
        
            return 0;
      
    }
    char toLowerCase(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch;
        }
        else{
            char temp = ch -'A'+'a';
            return temp;
        }
    }
    bool chekPalindrome(string a){
        int s = 0;
        int e = a.length()-1;
        while(s < e){
            if(a[s] != a[e]){
                return 0;
            }
            else{
                s++;
                e--;
            }
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
        string vish = "" ;
        for(int i =0; i<s.length(); i++){
            if( Valid(s[i])){
                vish.push_back(s[i]);
            }
        }
        for(int i=0; i <= vish.length(); i++){
            vish[i] = toLowerCase(vish[i]);
        }
        return chekPalindrome(vish);

        
    }
};