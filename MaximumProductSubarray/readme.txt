Function solve:

>> Initializes res to track maximum product and temp to 1.
>> First Loop (Forward Iteration):
>> Multiplies temp by each element in arr[].
>> Updates res with maximum of temp and res.
>> Resets temp to 1 if encountering 0.
>> Second Loop (Backward Iteration):
>> Similar to first loop, but iterates from end to start of array.
>> Returns the maximum product stored in res.

main Function:

>> Reads size n of array.
>> Declares array numbers[] to store integers.
>> Reads n integers into numbers[].
>> Calls solve function with numbers[] and n.
>> Prints the maximum product computed.