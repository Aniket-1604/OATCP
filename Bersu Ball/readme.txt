Read integers n and m representing the number of boys and girls respectively.
Initialize pairs counter to 0.
Declare arrays a[] and b[] of size n and m respectively for boys' and girls' dancing skills.
Read boys' dancing skills into array a[].
Read girls' dancing skills into array b[].
Sort arrays a[] and b[] in non-decreasing order.
Iterate through boys' dancing skills:
For each boy, iterate through girls' dancing skills.
If the absolute difference between boy's and girl's dancing skills is less than 2:
Increment pairs.
Mark the girl as unavailable.
Move to the next boy.
Print the value of pairs.