In the "maxIceCream" function :-
    >> It first sorts the prices of ice cream bars in ascending order using sort.
    >> Then, it iterates through the sorted prices.
    >> For each ice cream bar price, if the price is less than or equal to the remaining coins, it deducts the price from the coins and increments the answer (number of ice cream bars bought).
    >> If the price of an ice cream bar exceeds the remaining coins, it breaks out of the loop since the boy can't afford any more ice cream bars.

In the "main" function :-
    >> It opens input.txt file for input and output.txt file for output using ifstream and ofstream respectively.
    >> It declares variables n (number of ice cream bars), coins (number of coins), and value (vector to store ice cream bar prices).   
    >> It reads n from the input file, then iteratively reads the prices of each ice cream bar into the vector value.
    >> It reads the number of coins available from the input file.
    >> It calls the maxIceBars function with the input values to calculate the maximum number of ice cream bars that the boy can buy.
    >> It writes the result (number of ice cream bars bought) to the output file.
    >> Finally, it closes both input and output files.