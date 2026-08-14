# Lab 3 Questions  

### 1. Dynamic Number Operations   
Dynamically allocate memory for two integers using the new operator. Accept the values from the user and display their sum, difference, product, and quotient. Finally, release the allocated memory using the delete operator.   
Hint: Use two integer pointers and access their values using the dereference operator *.   

### 2. Dynamic Array– Reverse Order   
Dynamically allocate an array of n integers using the new operator. Accept the elements from the user and display them in reverse order. Properly deallocate the dynamically allocated memory after displaying the result.   
Hint: Use delete[] because an array is allocated dynamically.   

### 3. Count Even and Odd Numbers   
Dynamically allocate an integer array of size n. Accept the elements from the user and count how many elements are even and how many are odd.   
Hint: Use the modulus operator (%) to check whether an element is divisible by 2.   

### 4. Dynamic Array– Search an Element   
Dynamically allocate an array of n integers. Accept the elements and search for a number entered by the user. Display whether the element is present and, if present, display its position in the array.   
Hint: Traverse the dynamically allocated array using a loop and compare each element with the search value.   

### 5. Dynamic Object– Book Details   
Create a class named Book containing the following data members:   
• BookID   
• BookTitle   
• Author   
• Price   
Dynamically create a single Book object using the new operator. Write member functions to accept and display the book details. Finally, release the dynamically allocated object.   
Hint: Use the-> operator to access members of a dynamically allocated object.   

### 6. Dynamic Array of Objects– Product Details  
Create a class named Product containing:   
• Product ID   
• Product Name   
• Price   
• Quantity   
Dynamically allocate memory for n Product objects. Accept the details of all products and display the total cost of each product as well as the overall inventory value.   
Hint: Product Cost = Price × Quantity. Use delete[] after processing all objects.  

### 7. Dynamic Character Array   
Write a C++ program that dynamically allocates memory for a character array of size n. Accept a string from the user and count the number of vowels, consonants, digits, and spaces.   
Hint: Use new char[n] and examine each character individually.   

### 8. Dynamic Array with Function Processing   
Dynamically allocate an array of n integers. Create separate functions to:   
1. Accept the elements.   
2. Calculate the sum of all elements.   
3. Find the smallest element.   
4. Find the largest element.   
5. Display the results.   
Hint: Pass the dynamically allocated array to the functions using a pointer.   

### 9. Dynamic Employee Records   
Create a class named Employee containing:   
• Employee ID   
• Employee Name   
• Salary   
Dynamically allocate an array of n Employee objects. Write member functions to:   
1. Accept employee details.   
2. Display employee details.   
3. Find and display the employee having the highest salary.   
4. Calculate the average salary. Properly release the dynamically allocated array after processing all employee records.   
Hint: Compare the salary of each object while traversing the dynamically allocated array.  

### 10. Dynamic Matrix Operations   
Dynamically allocate two matrices of size m × n. Accept the elements of both matrices and perform matrix addition. Display the resulting matrix and properly deallocate all dynamically allocated memory.   
Hint:   
• Allocate memory for the row pointers first.   
• Allocate memory for each row separately.   
• For every allocated row, use delete[].   
• Finally, use delete[] for the array of row pointers.