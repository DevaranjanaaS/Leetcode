class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        if(int(coordinate1[0])%2==int(coordinate2[0])%2 && int(coordinate1[1])%2==int(coordinate2[1])%2){
            return true;
        }
        else if(int(coordinate1[0])%2!=int(coordinate2[0])%2 && int(coordinate1[1])%2!=int(coordinate2[1])%2){
            return true;
        }
        else{
            return false;
        }
    }
};