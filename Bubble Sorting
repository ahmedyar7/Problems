class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here  
        int counter = 1;
        while(counter<n)
        {
            for(int i=0; i<n-counter; i++)
            {
                if(arr[i+1]<arr[i])
                {
                    int swap = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = swap;
                }
            }
            counter++;
        }
    }
};
