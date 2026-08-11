int missingInteger(int* nums, int numsSize) {
    int max = 0;
    int count=nums[0];
    int previ=0;
    max = nums[0];
    for (int i = 1; i < numsSize; i++) 
    {
        if(nums[i]==nums[i-1]+1)
        {
            count+=nums[i];
        }
        else
        {
            break;
        }           
    }
    while(1)
    {
        max=0;
    for(int i=0;i<numsSize;i++)
    {
        if (nums[i]==count)
        {
            max=1;
        }
    }    
        if(max==0)
        {
            return count;
        }
        count++;
    }
    

}