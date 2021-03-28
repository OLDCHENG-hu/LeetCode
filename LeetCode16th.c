int compInt(const void *a,const void *b) {
    return *(int *)a - *(int *)b;
}

int threeSumClosest(int* nums, int numsSize, int target) {
    qsort(nums, numsSize, sizeof(int), compInt);
    int i, j, k;
    int sum = nums[0] + nums[1] + nums[2];
    for (i = 0; i < numsSize; ++i) {
        j = i + 1;
        k = numsSize - 1;
        while (j < k) {
            if (abs(target - (nums[i] + nums[j] + nums[k])) < abs(target - sum)) {
                sum = nums[i] + nums[j] + nums[k];
                if (k-1 == j || j+1 == k )
                    break;
            }
            if (nums[i] + nums[j] + nums[k] < target) {
                j++;
            }
            else if (nums[i] + nums[j] + nums[k] > target) {
                k--;
            }
            else if (nums[i] + nums[j] + nums[k] == target)
                return nums[i] + nums[j] + nums[k];
        }
    }
    return sum;
}
