#include <iostream>

/*
              Binary Search -  it is an searching algorithm in a limited search space
                                binary search is only applicable in sorted elements

          explanation -  lets take an example of dictionary
                        we have to search a word in the dictionary, if we do it by turning page by page
                        then it is called Linear Search.


        lets have an array -  [3, 4, 6, 7, 9, 12, 16, 17],      n = 8
                        we will be given an element which we have to find in the array

    code for finding any element
int search(vector<int> & nums, int target)
{
    int n = nums.size();
    int low = 0, high = n-1;

    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(nums[mid] == target)
            return mid;
        else if(target > nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}


                Recursive binary search code -
        pseudo code
f(arr, low, high, target)
{
    if(low > high)
        return;

    mid = (low + high) / 2

    if(arr[mid] == target)
        return mid;
    else if(target > arr[mid])
        return f(arr, mid + 1, high, target)

    return f(arr, low, mid - 1, target)
}


        Actual code
int bs(vector<int> &nums, int low, int high, int target)
{
    if(low > high)
        return -1;

    int mid = (low + high) / 2;

    if(nums[mid] == target)
        return mid;
    else if(target > nums[mid])
        return bs(nums, mid - 1, high, target);

    return bs(nums, low, high - 1, target);
}
int search(vector<int> & nums, int target)
{
    return bs(nums, 0, nums.size() - 1, target);
}


                Time Complexities

            TC - O(log2 N)              // log of N base 2



                Overflow case
                                let there be an example of an array where low is at 0 and high is at INT_MAX
                                there might be some cases where low might reach to the INT_MAX and by the formula
                                "mid = (low + high) / 2", mid will go to the 
                                                                mid = (INT_MAX + INT_MAX) / 2
                                which will cause overfow
                                to tackle his problem we can use 'long long' instead of 'int' or we can use
                                the below formula   
                                                    mid = low + ((high - low) / 2)      <- this will not cause overflow

                                              expl - mid = low + ((high - low) / 2)
                                                         = (2 * low + high - low) / 2
                                                         = (low + high)/2
*/

int main()
{
    std::cout << "Hello World!\n";
}