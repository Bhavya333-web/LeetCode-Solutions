double findMedianSortedArrays(int* nums1, int m, int* nums2, int n) {
    int totalLength = m + n;
    int middle = totalLength / 2;
    int i = 0, j = 0;
    int current = 0, prev = 0;

    for (int k = 0; k <= middle; k++) {
        prev = current;
        if (i < m && (j >= n || nums1[i] <= nums2[j])) {
            current = nums1[i++];
        } else {
            current = nums2[j++];
        }
    }

    if (totalLength % 2 == 1) {
        return current;
    }else {
        return (prev + current) / 2.0;
    }
}