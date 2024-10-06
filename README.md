C Piscine C 01 – Exercises  
  
This repository contains my solutions to the C Piscine C 01 module from 42 School. These exercises focus on manipulating pointers, memory, and basic data structures in C. Below is an overview of the tasks I have completed, covering topics such as pointer dereferencing, swapping values, division operations, string manipulation, and array handling.  
  
Exercises Completed:  
  
- Exercise 00: ft_ft  
Objective: Create a function ft_ft that takes a pointer to an integer and sets the value of that integer to 42.  
  
Key Learnings:  
Understanding pointers and how to modify the value at a memory address.  
  
- Exercise 01: ft_ultimate_ft  
Objective: Write a function ft_ultimate_ft that takes a pointer to a pointer to a pointer (9 times) to an integer, and sets the value to 42.  
    
Key Learnings:  
Mastering deep pointer dereferencing and understanding multiple levels of indirection.  
    
- Exercise 02: ft_swap  
Objective: Implement a function ft_swap that swaps the values of two integers using pointers.  
  
Key Learnings:  
How to swap values by manipulating pointers, and practicing value exchange through memory.    
   
- Exercise 03: ft_div_mod  
Objective: Create a function ft_div_mod that divides two integers and stores both the result and the remainder.  
   
Key Learnings:  
Returning multiple results from a function using pointers.   
   
- Exercise 04: ft_ultimate_div_mod  
Objective: Implement ft_ultimate_div_mod to divide two integers. Store the result in one of the original variables and the remainder in the  other.  
   
Key Learnings:  
Advanced use of pointers to manipulate multiple variables within a single function.  
   
- Exercise 05: ft_putstr  
Objective: Write a function ft_putstr that takes a string (char array) as input and prints it using the write() function.  
   
Key Learnings:  
Working with character strings and manipulating them as arrays of characters.  
Using the write() function to output data.  
   
- Exercise 06: ft_strlen   
Objective: Implement ft_strlen, a function that returns the length of a string (number of characters).  
   
Key Learnings:  
Iterating over arrays to count elements.  
Basic string manipulation and understanding how strings are terminated by null characters (\0).  
  
- Exercise 07: ft_rev_int_tab  
Objective: Create ft_rev_int_tab, which reverses the contents of an array of integers.  

  
Key Learnings:  
Manipulating arrays using pointers.  
Implementing algorithms to reverse arrays by swapping elements.  
  
- Exercise 08: ft_sort_int_tab  
Objective: Write ft_sort_int_tab, a function that sorts an array of integers in ascending order.  
  
  
Key Learnings:  
Implementing a simple sorting algorithm (e.g., bubble sort) to arrange integers in ascending order.
Using loops and conditional logic to manipulate arrays.  
  
  
Compiler flags: -Wall -Wextra -Werror to catch potential issues in code.  
Version Control: Git for managing code versions and submission to the 42 School repository.  
  
How to Run:  
Clone this repository:  
bash  
Copy code  
git clone git@github.com:Moleksan/42_Piscine_C01.git   
  
Navigate to the exercise directory and compile the C file. For example, for Exercise 00:  
  
bash  
Copy code  
cd ex00  
gcc -Wall -Wextra -Werror ft_ft.c -o ft_ft  
./ft_ft  
  
Conclusion:  
This project further developed my understanding of pointers, memory manipulation, and basic algorithms in C. Through these exercises, I  learned how to work effectively with data structures such as arrays and strings, and apply logic to perform common programming tasks like  swapping, sorting, and counting elements.  
