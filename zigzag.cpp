class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        int flag = 1;
        for(int i=0;i<n-1;i++)
        {
            if(flag==1)
            {
                if(arr[i]>arr[i+1])
                {
                    swap(arr[i],arr[i+1]);
                }
                flag = 0;
            }
            else
            {
                if(arr[i]<arr[i+1])
                {
                    swap(arr[i],arr[i+1]);
                }
                flag = 1;
            }
        }
    }
};
