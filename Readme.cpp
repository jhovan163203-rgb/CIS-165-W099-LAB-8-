Test Case
Input Data
Expected Result
Actual Output
Status
Test 1
8 3 12 -99
Smallest 3; largest 12.
Smallest value: 3, Largest value: 12
Pass
Test 2
-8 -3 -12 -99
Smallest -12; largest -3.
Smallest value: -12, Largest value: -3
Pass
Test 3
5 -99
Smallest 5; largest 5.
Smallest value: 5, Largest value: 5
Pass
Test 4
0 0 -99
Smallest 0; largest 0.
Smallest value: 0, Largest value: 0
Pass
Test 5
-99
Clear no-data message.
No data values were entered.
Pass
Test 6 (Custom)
-50 -100 -2 -99
Smallest -100; largest -2.
Smallest value: -100, Largest value: -2
Pass


Question 1 Tracing - It starts with 8 and since its the first number its both the smallest and largest number.
Then 3 goes into the code and it is smaller than 8 so it becomes the smallest integer and the largest is still 8 
Next entered is 12, 12 is bigger than 8 and 3 so it becomes the largest and 3 is still the smallest 
The code hits -99 the loop sees -99 and it stops without changing anything 
Answer is 3 is smallest and 12 is largest 

Question 2 how the code keeps -99 out of the calculations 
The program uses a priming read before the loop starts and performs reads at the bottom of the loop. The (currentNumber != SENTINEL) condition is evaluated every time and reading -99 stops the loop. 

Question 3 why initializing both extrema to zero is incorrect 
If you look at both smallest value and the largest value to 0 and process an all negative series like -8,-3,-12,-99 then the largest value would remain 0 because all the negative values are smaller 

Question 4 distinguishing an empty series from a series containing zero 
-99 entered first so the loop fails immediately and so the code comes out with the result of “No data values were entered” 

Initial Plan- find the largest and smallest values for integers using variables and inputs such as  


Inputs: Integers entered one by one, ending with -99.

Variables:

SENTINEL (constant set to -99)

currentNumber (stores current user entry)

smallestValue (tracks lowest integer)

largestValue (tracks highest integer)

isFirstValue (boolean flag to handle first entry initialization)

valueCount (counter to track valid inputs)



Ai reflection 
While i was doing this lab I used gemini to help clean up errors such as 

min_max.cpp:18:23: error: expected ';' before '}' token
   18 |         valueCount++
      |                     ^
      |                     ;
   19 |     }

With this error I forgot to put a ; at the end of valueCount++ inside the code and gemini caught this and added it so that the code would work and that it would correctly loop. 
