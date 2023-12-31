class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int j = arr[i]%n;
            arr[j]+=n;
        }
        for(int i=0;i<n;i++)
        {
            if((arr[i]/n)>=2)
            {
                ans.push_back(i);
            }
        }
        if(ans.size() == 0)
        {
            return {-1};
        }
        return ans;
    }
