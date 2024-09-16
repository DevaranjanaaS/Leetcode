class Solution {
public:
    int getMin(string time){
        int hours = stoi(time.substr(0, 2));
        int minutes = stoi(time.substr(3, 2));
        return hours * 60 + minutes;
    }
    int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size();
        sort(timePoints.begin(),timePoints.end());
        int mincnt=INT_MAX;
        for(int i=0;i<n;i++){
            int t1=getMin(timePoints[i]);
            int t2=getMin(timePoints[(i+1)%n]);
            if(t2<t1) t2+=1440;
            mincnt=std::min(mincnt,t2-t1);
        }
        return mincnt;
    }
};