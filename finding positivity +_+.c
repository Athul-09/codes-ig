int firstMissingPositive(int* nums, int numsSize){
    void swap(int* ay, int* yo) { /*finding the least positive element in an infinite array given*/
    int temp = *ay;
    *ay = *yo;
    *yo = temp;
}
for (int i = 0; i < numsSize; i++) {
        while (nums[i] > 0 && nums[i] <= numsSize && nums[i] != nums[nums[i] - 1]) {
            swap(&nums[i], &nums[nums[i] - 1]);
        }
    }
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
    return numsSize + 1;
}
