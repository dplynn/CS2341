#ifndef QUICKSORT_ORIG_H
#define QUICKSORT_ORIG_H

// Code from https://users.cs.fiu.edu/~weiss/dsaa_c++4/code/
// Modified by MFH to fix compiler warnings

/**
 * Internal quicksort method that makes recursive calls on a subarray (left to right).
 * Uses median-of-three partitioning for pivot and a use insertion sort for small subarrays.
 * The cutoff can be hand tunes.
 */
template <typename Comparable>
void quicksort_orig(std::vector<Comparable> &a, std::size_t left, std::size_t right)
{
    // subarray only contains 2 values. Sort them and we are done with the recursion
    if (right - left < 2) {
        if (a[right] < a[left])
            std::swap(a[left], a[right]);
        return;
    }

    // use the fists element as pivot
    const Comparable &pivot = a[left];

    // swap large values (larger than pivot) from left to  with small (smaller than pivot)
    // values from the right (start left after the pivot)
    std::size_t i = left + 1, j = right;
    while (true)
    {
        // find the next element in the left subarray that is larger than the pivot
        while (i <= right && a[i] < pivot)
            ++i;
        // find the next element in the right subarray that is smaller than the pivot
        while (j >= left && a[j] > pivot)
            --j;

        // stop if left and right cross 
        if (i >= j)
            break;

        // swap the values
        std::swap(a[i], a[j]);
    }

    // swap the pivot with the last element that is less than the pivot.
    std::swap(a[left], a[j]);

    // sort subarray below the pivot
    if (j != left)
        quicksort_orig(a, left, j - 1);
    // sort subarray above the pivot
    if (j != right)
        quicksort_orig(a, j + 1, right);

}

/**
 * Quicksort algorithm (driver).
 */
template <typename Comparable>
void quicksort_orig(std::vector<Comparable> &a)
{
    quicksort_orig(a, 0, a.size() - 1);
}

#endif
