class Solution {
public:
    //Use of min heap
    int findKthLargest(vector<int>& nums, int k) 
    {
          priority_queue<int, vector<int>,greater<int>>pq;//min heap
          for(auto x: nums)
          {
              pq.push(x);
              if(pq.size()>k)
              {
                  pq.pop();
              }
          }
          return pq.top();
    }
};