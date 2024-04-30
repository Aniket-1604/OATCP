1. Matrix Representation:
    The matrix is represented as a vector of vectors (matrix) where each inner vector represents a row of the matrix.
2. Preprocessing Rows:
    For each row in the matrix, we preprocess it to form a single integer (row[i]) where each bit represents the color of the corresponding cell. We use bitwise OR operation (|) to combine the bits.
3. Iterating through Rows:
    We iterate through each pair of rows i and j, where i ranges from 0 to n-1 and j ranges from i+1 to n-1.
4. Counting Common Black Cells:
    We calculate the number of common black cells between rows i and j using bitwise AND operation (&). The __builtin_popcount function is used to count the number of set bits (black cells) in the result.
5. Calculating Subgrid Count:
    For each pair of rows, we calculate the number of subgrids formed by these rows where all corners are black.
    If there are bits common black cells between rows i and j, we calculate the count of subgrids as (bits * (bits - 1)) / 2 (combination of 2 from bits).
    We accumulate this count to the total ans.
6. Returning Result:
    Finally, we return the total count of subgrids where all corners are black.