class Solution{
public:
    int remove_duplicate(int array[],int n)
    {
        int i = 0;
        for (int j = 0; j < n; j++)
        {
            if (array[j] != array[i])
            {
                array[i + 1] = array[j];
                i++;
            }
        }
        return i+1;
    }
};
