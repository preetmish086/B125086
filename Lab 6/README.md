# Lab 6 Questions  

### 1. Fraction Calculator– Addition and Subtraction    
Create a class Fraction containing a numerator and a denominator. Overload the binary + and-operators to add and subtract two fractions. Simplify each resulting fraction using the greatest common divisor (GCD). Ensure that the denominator of the final result is positive.   
Hint: Use a separate helper function to simplify the fraction.  

### 2. Time Duration Calculator     
Create a class Duration containing hours and minutes. Overload the binary + operator to add two duration objects. Normalize the result so that minutes are always less than 60. Return a new object and display both the original durations and the resulting duration.    

### 3. Book Price Ranking     
Create a class Book containing a book title and price. Overload the < operator to compare two books by price. If the prices are equal, the book with the lexicographically smaller title should be considered smaller. Return a Boolean result.     

### 4. Unary Operator– Account Adjustment     
Create a class AccountBalance containing a balance. Overload the unary- operator to return a new object whose balance is the negative of the original balance. Display both objects and verify that the original balance remains unchanged.   

### 5. Score Tracker– Prefix and Postfix Increment     
Create a class Score containing an integer score. Overload both prefix and postfix ++ operators. Demonstrate the difference between ++obj and obj++ by storing their results in separate objects and displaying the values.   
Hint: The postfix operator function uses a dummy int parameter to distinguish it from the prefix version.  

### 6. Date Equality and Inequality     
Create a class Date containing day, month, and year. Overload the == and != operators. Two date objects are equal only if their day, month, and year are all equal. Display the results of both comparisons.  

### 7. Inventory Combination     
Create a class InventoryItem containing product ID, unit price, and quantity. Overload the binary + operator to combine two objects only if their product IDs and unit prices match. The resulting object should contain the combined quantity. If the objects are incompatible, report the situation clearly. Do not modify either original object.    

### 8. Temperature Comparison     
Create a class Temperature containing a Celsius value. Overload the > and < operators to compare two temperature objects. Additionally, overload the unary- operator to return a new object with the negated temperature value. Demonstrate all three operations.     

### 9. Matrix Addition     
Create a class Matrix representing a 2×2 matrix. Overload the binary + operator to add two matrix objects element-wise and return a new matrix. Display both original matrices and the resulting matrix. Ensure that the original objects remain unchanged.  

### 10. Shopping Bill Operations     
Create a class Bill containing the number of items and the total bill amount. Overload the binary + operator to combine two bills by adding their item counts and total amounts. Also overload the > operator to compare two bills by their total amount. Display the combined bill and the result of comparing the two original bills.