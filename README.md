# cis165-lab9
cis165-lab9/   min_max.cpp   README.md   AI_REFLECTION.md

Program Description:

This program reads a series of integers from the user and determines the smallest and largest values entered. The program uses a while loop to continue reading numbers until the user enters -99.

The value -99 is a sentinel value, meaning it signals the end of the input and is not included in the calculations.

If the user enters -99 immediately, the program displays a message explaining that no data values were entered.

Initial Plan
The program will ask the user to enter integers one at a time. The number -99 will indicate the end of the series and will not be included in the calculations.

I will use a while loop to read the numbers until the sentinel value is entered. I will use variables to store the current number, the smallest number, the largest number, and a Boolean variable to track whether any data has been entered.

When the first valid number is entered, I will initialize both the smallest and largest variables to that number. For every additional number, I will compare it with the current smallest and largest values and update them when necessary.

If the first entry is -99, the program will display a message explaining that no data was entered. Otherwise, it will display the smallest and largest values with clear labels.

Variables Used

Variable	Purpose
SENTINEL	Stores -99, which ends the input.
number	Stores the current integer entered by the user.
smallest	Stores the smallest number entered.
largest	Stores the largest number entered.
hasData	Tracks whether the user entered any valid numbers.
Program Logic
Declare the variables and initialize hasData to false.
Ask the user to enter integers.
Read the first integer.
Use a while loop to process numbers until -99 is entered.
If the first valid number is entered, initialize both smallest and largest to that number.
Compare each additional number with the current smallest and largest values.
Update the values whenever a smaller or larger number is found.
If no numbers were entered, display a no-data message.
Otherwise, display the smallest and largest values.
How to Compile and Run
This program uses C++17.

To compile using g++, run:


bash
g++ -std=c++17 -Wall -Wextra min_max.cpp -o min_max
To run on Mac or Linux:


bash
./min_max
On Windows:


bash
min_max.exe
Testing and Results
I ran all six test cases and checked the actual output against the expected results. All six tests produced the correct results.

Test 1: Positive Numbers
Input:


text
8
3
12
-99
Expected Result:

Smallest: 3
Largest: 12
Actual Result:

Smallest: 3
Largest: 12
Status: PASS

Test 2: Negative Numbers
Input:


text
-8
-3
-12
-99
Expected Result:

Smallest: -12
Largest: -3
Actual Result:

Smallest: -12
Largest: -3
Status: PASS

This test confirms that the program correctly handles negative numbers and does not include the sentinel in the calculations.

Test 3: Single Value
Input:


text
5
-99
Expected Result:

Smallest: 5
Largest: 5
Actual Result:

Smallest: 5
Largest: 5
Status: PASS

This test confirms that the program works when only one valid number is entered.

Test 4: Repeated Zero Values
Input:


text
0
0
-99
Expected Result:

Smallest: 0
Largest: 0
Actual Result:

Smallest: 0
Largest: 0
Status: PASS

This test confirms that zero is treated as a valid data value.

Test 5: Empty Series
Input:


text
-99
Expected Result:

Display a clear message stating that no data values were entered.

Actual Result:

No data values were entered.

Status: PASS

This test confirms that the program correctly handles an empty series without displaying invented minimum or maximum values.

Test 6: Additional Test
Input:


text
15
-20
7
30
-99
Expected Result:

Smallest: -20
Largest: 30
Actual Result:

Smallest: -20
Largest: 30
Status: PASS

This additional test checks whether the program can handle a longer series containing both positive and negative numbers.

Code Explanation
1. Trace one series through the loop. Show when the extrema are initialized and updated.
For the input 8, 3, 12, -99, the first number, 8, initializes both the smallest and largest variables. The next number, 3, is smaller than the current smallest, so the smallest becomes 3. The next number, 12, is larger than the current largest, so the largest becomes 12. When -99 is entered, the loop stops.

2. How does your code keep -99 out of the calculations?
The while loop checks whether the entered number is different from -99 before processing it. When -99 is entered, the condition becomes false and the loop ends. Therefore, -99 is never included in the minimum or maximum calculations.

3. Why is initializing both extrema to zero incorrect for some series?
Initializing both values to zero can cause incorrect results because zero might not be part of the input. For example, if all the entered numbers are negative, zero would incorrectly be considered the largest value. Initializing both variables using the first actual number prevents this problem.

4. How do you distinguish an empty series from a series containing zero?
The Boolean variable hasData starts as false and changes to true when the first valid number is entered. If the user enters -99 immediately, hasData remains false, meaning no data was entered. If the user enters zero, it is processed as a valid number and hasData becomes true.

Final Testing and Submission
All six test cases were run successfully, and the actual outputs matched the expected results.

The program was checked to make sure it:

Uses a while loop to process a variable number of integers.
Excludes -99 from the calculations.
Correctly identifies the smallest and largest values.
Handles positive, negative, repeated, and zero values.
Handles a single-value series.
Displays a clear message when no data is entered.
The final source file is min_max.cpp.

Repository: cis165-lab9

Final status: All six tests passed.
