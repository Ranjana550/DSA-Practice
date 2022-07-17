/***
 
***/
int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());

        int n = nums.size(), ans = 0, i, j = -1;

        for (i = 0; i < n; i++)
        {
            j = max(j, i);

            while (j < n && (nums[i] - nums[j]) <= k)
            {
                k -= (nums[i] - nums[j]);
                j++;
            }
            
            ans = max(ans, j - i);
            if (j >= n)
                break;
            
            if (j > i && i + 1 != n)
            {
                k += (j - i - 1) * (nums[i] - nums[i + 1]);
            }
        }

        return ans;
    }