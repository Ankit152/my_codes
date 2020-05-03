class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=*max_element(candies.begin(),candies.end());
        int len=candies.size();
        vector<bool> arr(len);
        for(int i=0;i<len;i++){
            if(candies[i]+extraCandies>=max){
                arr[i]=true;
            }
        }
        return arr;
    }
};
