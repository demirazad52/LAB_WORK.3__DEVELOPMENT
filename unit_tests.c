#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

void test_threeSumClosest() {
    int nums1[] = {0, 1, 2};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    int target1 = 3;
    int expected1 = 3;
    int result1 = threeSumClosest(nums1, numsSize1, target1);
    assert(result1 == expected1);

    int nums2[] = {-1, 2, 1, -4};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    int target2 = 1;
    int expected2 = 2;
    int result2 = threeSumClosest(nums2, numsSize2, target2);
    assert(result2 == expected2);

    // Add more test cases here...

    printf("All test cases passed!\n");
}

int main() {
    test_threeSumClosest();
    return 0;
}
