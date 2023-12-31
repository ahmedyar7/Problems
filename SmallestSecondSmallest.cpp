vector<int> minAnd2ndMin(int array[], int n)
{
    vector<int>result;
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(array[i]<smallest)
        {
            smallest = array[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(array[i] < secondSmallest && array[i] != smallest)
        {
            secondSmallest = array[i];
        }
    }
    if(secondSmallest == INT_MAX)
    {
        // result.push_back(secondSmallest);
        result.push_back(-1);
    }
    else
    {
        result.push_back(smallest);
        result.push_back(secondSmallest);
    }
    return result;
    
}
