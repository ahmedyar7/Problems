class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
        int first = arr[0];int second = -1;
        first = second;
        for(int i=0;i<n;i++)
        {   
            if(arr[i]>first)
            {
                second = first;
                first = arr[i];
            }
            if(arr[i]>second && arr[i]!=first)
            {
                second = arr[i];
            }
        }
        return second;
        // return -1;
	}
};
