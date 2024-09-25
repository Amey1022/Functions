# Functions
## Aim
To study pointer operations

## Software Used
Visual studio code

## Theory

In C++, functions can receive parameters in different ways, influencing how the function manipulates the provided values. Two common methods are Call by Reference and Call by Value:
Call by Reference
Definition: Call by Reference means passing the address (reference) of the actual parameters to the function. This allows the function to modify the original values.

Working: The function receives pointers to the variables, and operations performed inside the function affect the original variables directly.

Call by Value
Definition: Call by Value means passing a copy of the actual parameters to the function. Changes made to the parameters inside the function do not affect the original variable

## Algorithms
Call by value<br>
Start<br>
Define Function swap(int x, int y)<br>
Input: Two integers x and y<br>
Output: Swapped values of x and y<br>
Inside Swap function:<br>
Create a temporary variable temp<br>
Assign the value of x to temp<br>
Assign the value of y to x<br>
Assign the value of temp to y<br>
Inside main Function<br>
Define two integers a and b with 5 and 2<br>
Call swap(a, b)<br>
Print the value of a<br>
Print the value of b<br>
End<br>
Call by reference<br>
Start<br>
Define Function swap(int *x, int *y)<br>
Input: Pointers to two integers x and y<br>
Output: Swapped values of the integers pointed to by x and y<br>
Steps:<br>
Make a temporary variable temp<br>
Assign the value pointed to by x to temp (temp = *x)<br>
Assign the value pointed to by y to the location pointed to by x (*x = *y)<br>
Assign the value of temp to the location pointed to by y (*y = temp)<br>
In main Function<br>
Define integers a and b with 5 and 2.<br>
Call swap(&a, &b) function<br>
Print the value of a<br>
Print the value of b<br>
End<br>
## Conclusion
We learnt about the operations on pointers
