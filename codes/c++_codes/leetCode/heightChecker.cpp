class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            arr[i]=heights[i];
        }
        sort(arr.begin(),arr.end());
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=heights[i]) cnt++;
        }
        return cnt;
    }
};
