Function solve:

>> Initialize variables sum and curr to 0.
>> Iterate through the array:
>> Update sum by adding each element of the array.
>> Update curr by adding the product of the index and the array element.
>> Initialize maxProd with the value of curr.
>> Iterate from index 1 to n-1:
>> Compute the next value by subtracting (sum - arr[i-1]) from curr and adding arr[i-1] * (n-1).
>> Update curr with the next value.
>> Update maxProd with the maximum of maxProd and the next value.
>> Return maxProd.

main Function:

>> Read the size n of the array from input.
>> Declare an array arr[] to store integers with size n.
>> Iterate through the array elements and read them into arr[].
>> Call the solve function with the array arr[] and its size n.
>> Print the result returned by the solve function.