1. Hamming Distance Calculation (hammingDistance function):
    This function calculates the Hamming distance between two integers x and y.
    It first computes the XOR of x and y, which results in a number where each bit is set if the corresponding bits in x and y are different.
    Then, it iterates through the bits of the XOR result.
    For each set bit in the XOR result, it increments the distance variable, which represents the Hamming distance.
    Finally, it returns the distance, which is the count of differing bits between x and y.

2. Total Hamming Distance Calculation (totalHammingDistance function):
    This function computes the sum of Hamming distances between all pairs of integers in the given array nums.
    It initializes the totalDistance variable to store the total sum of Hamming distances.
    It iterates through each bit position (from 0 to 31, as integers are typically represented using 32 bits).
    For each bit position i, it counts the number of ones at that position among all integers in nums.
    It then calculates the contribution of this bit position to the total Hamming distance by multiplying the count of ones at position i by the count of zeros (which is n - countOnes, where n is the total number of integers in nums).
    It accumulates this contribution to the totalDistance.
    After iterating through all bit positions, it returns the totalDistance, which represents the sum of Hamming distances between all pairs of integers in nums.

3. Main Function (main):
    Initializes test cases nums1 and nums2.
    Computes the total Hamming distance for each test case using the totalHammingDistance function.
    Prints the results.