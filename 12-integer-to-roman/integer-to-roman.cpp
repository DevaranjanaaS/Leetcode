class Solution {
public:
    string intToRoman(int num) {
        string a1[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int a2[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        int i=0;
        string ans;
        while(num!=0){
            if(num>=a2[i]){
                ans+=a1[i];
                num-=a2[i];
            }
            else{
                i++;
            }            
        }
        return ans;
    }
};