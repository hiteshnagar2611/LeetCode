class Solution {
public:

    int expandAroundIndex(string s, int i, int j){
        int count=0;
        while(i >=0 && j < s.size() && s[i]==s[j]){
            count++;
            i--;
            j++;

        }
        return count;
    }

    int countSubstrings(string s) {
        int count =0;
        int n=s.size()-1;

        for(int i=0;i<s.size();i++){
            //odd 
            int oddans= expandAroundIndex(s,i,i);
            count= count + oddans;
            //even
            int evenans= expandAroundIndex(s,i,i+1);
            count = count + evenans;
        }
        return count;
    }
};
