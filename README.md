## Example 1: Conversion between Polar Coordinates and Cartesian Coordinates
A C++ program is developed for displaying the location of the points and performing the 
conversions between polar coordinates (r, θ) and cartesian coordinates (x,y).We need to know the 
formulae used for the conversions .We need to know the constraints on input such as radius is 
always positive and, the requirements such as fixing π to 3.14159 and the range of theta to be 
between 0 and 2π.Designing of output appearance and formatting of results can be done by using 
the manipulators. For instance, the values of the coordinates are displayed in 3 decimal places.
This complex program that has two tasks mentioned above is modularised into the functions. 
The user-defined functions are developed to solve each types of conversion of the coordinates and 
indicate the location of the points. So, the functions can be compiled and reused in separate cases. 
In the functions, the nested if-else statements are used as we have some conditions to consider 
and test.
\n
In the program, we include the header files used, such as iomanip and declare the variables 
used. The user instructions are displayed. The user is asked to input their choice(case), and once 
the case match is found, the block of statements associated with that particular case is executed. 
The user needs to input the coordinates of the points for the calculations. The functions of particular 
conversion and the function of indicating the location of points are called out. After computing the 
conversions, the location of the points and the result of the conversion of the coordinates are 
printed out. At the end of the program, the user is asked whether there is more data to be 
processed. If yes, the loop is entered, and the main program can compute when the user keys in 
‘y’ for yes. Otherwise, the loop is exited, and the program ends
