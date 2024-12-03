class Solution {
public:
    string reverseWords(string s) {
        string ns="";
        vector<string> temp;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(ns!="")
                    temp.push_back(ns);
                ns="";
            }else{
                ns+=s[i];
            }
        }
        if(!ns.empty()){
            temp.push_back(ns);
            ns="";
        }    
        for(int i=temp.size()-1;i>=0;i--){
            ns+=temp[i];
            if(i>0)
                ns+=" ";
        }
        return ns;
    }
};