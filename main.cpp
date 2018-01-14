//
//  main.cpp
//  LeetCode287_FindTheDuplicateNumber
//
//  Created by Rui on 1/13/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 1;
        int high = nums.size() - 1;
        
        while(low < high)
        {
            int mid = (low + high) / 2;
            int count  = 0;
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] <= mid)
                    count ++;
            }
            
            if(count <= mid)
                low = mid + 1;
            else
                high = mid;
        }
        
        return low;
    }
};
