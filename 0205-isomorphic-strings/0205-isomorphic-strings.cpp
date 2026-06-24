class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }

        map<char, char> st, ts;
        for(int i=0; i< s.length(); i++){
            char c1=s[i];
            char c2=t[i];
            if(st.count(c1)){
                if(st[c1]!=c2){
                    return false;
                }
            }
            else{

                if(ts.count(c2)){
                    return false;
                }
                 st[c1] = c2;
            ts[c2] = c1;
            }


        }
        return true;
    }
};