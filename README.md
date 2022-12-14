# The-Fibonacci-Problem-and-the-Golden-Ratio-

Abstract 
In this project, you will develop exhaustive search and approximation algorithms for solving 
the Fibonacci problem. The time complexity of your algorithm will be either exponential, 
linear or polynomial. The second part of the project involves implementing an exhaustive 
search algorithm for the largest sum subarray problem with polynomial efficiency class. 
Problem 1: The Fibonacci Problem and the Golden Ratio 
In Fibonacci sequence, each member (or the Fibonacci number, ๐น!)  is obtained by calculating 
the sum of two preceding members. Example of a sequence of Fibonacci numbers is shown 
below:  
 
0,1,1,2,3,5,8,13,21,34,55,... (1) 
 
 
Mathematically, the Fibonacci sequence contains series of ๐น! such that  
 
 
๐น!= /
๐น!"#+ ๐น!"$  ,        ๐ ยณ 2
0 ,                           ๐ = 0
1 ,                            ๐ = 1
   (2) 
There are some efficient algorithms for solving this problem. Some of these approaches will 
reduce the running time complexity while increasing the space requirement. The dynamic 
programming approach is one of them and will be discussed in subsequent weeks. 
 
For this project, you are expected to develop two algorithms to solve the Fibonacci problem. 
 
 
A. The Exhaustive Pattern 
The first approach will involve recursive calculation of each member of the sequence.  
 
a. Using the formular above, develop a recursive algorithm to calculate the ๐๐กโ terms of 
the sequence. The first term of the sequence is 0, as shown above.  
b. Print out the 15th term of the sequence. 
 
 2 
 
B. The Golden Ratio Approach  
The ratio of any two successive members of  a Fibonacci sequence  i.e. 4%(!'#)
)(!)5) is known as 
the golden ratio, F,  This ratio approximates 1.61803.  
 
A Fibonacci number (a member of the sequence) can be calculated using the formular: 
 
๐น! = 61 + โ58!
โ 61 โ โ58!
 
2!โ5   (3) 
 
In relations to a previous member of the sequence, the ๐๐กโ term of the sequence can be 
calculated using: 
๐น!โ ๐น*;1 + โ5
2 <
!"*
(4) 
 
Where ๐น* represents any of the preceding terms of ๐น!.  Recall that #'โ,
$ is equal to 1.61803 
and thus maybe substituted. 
An approximation of the next term of the sequence can also be obtained by multiplying the 
preceding term by the Golden Ratio 
๐น!'#โ ๐น!;1 + โ5
2 < (5) 
 
 
There is a maxim that the ratio of two consecutive Fibonacci numbers approaches the Golden 
Ratio, as ๐ gets bigger. 
 
a. Design algorithms to obtain the Fibonacci numbers using equations (4) and (5) above 
When implementing equation (4), ask the user to enter 'p'. You should specify that โpโ 
should be a positive integer and non-floating point. If a wrong number is entered, 
inform the user and request for a new number, until a correct input is received.  Use 
equation (3) to obtain  ๐* . Then ask the user to enter โnโ. Use the calculated ๐*  to 
obtain ๐!. 
When implementing equation (5),  equation (3) should be used to find ๐! 
 
 3 
 
b. Print the first 20 terms of the sequence 
c. Compare your outputs when equation (4) is used against results from equation (5) 
d. Check and confirm or disprove the maxim above using ๐น- and ๐น-. (from equation 
5imlementation) 
 
Part 2: The Largest Sum Subarray Problem 
The problem involves finding a contiguous part of an array of numbers that adds up to the 
maximum possible sum. 
 
largest sum subarray problem 
input: a non-empty vector ๐ of ๐ integers 
output: indices ๐,๐ such that 0 โค ๐ < ๐ โค ๐, such the slice ๐[๐:๐] has maximum 
sum 
 
Recall that the notation ๐[๐:๐] means the part of ๐ starting at index ๐[๐] and up to, but not 
including, ๐[๐]. Note that the solution ๐[๐:๐] may not be empty due to the constraint, ๐ <
๐. 
 
Sample input = (-3, -5, 5, -1, -3, 1, 5, -6) 
 
Sample output = (5, -1, -3, 1, 5 ) 
 
Exhaustive Search Algorithm 
 
The Largest Sum Subarray Problem may be solved using any of the patterns we discussed in 
class. The exhaustive search pattern provides a straightforward approach that considers all 
pairs of indices ๐,๐.   
 
Design an exhaustive search approach for solving the problem. You may read-in the sample 
input file above as a .txt file or ask user to enter a list. You may not hard-code the list into 
your algorithm. 
