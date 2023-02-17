# Exercise 1.6:Explain whether the following program fragment is legal

- Author: Heng Yin
- Date: 17 Feb

<code>std::cout << "The sum of " << v1;  
 << " and " << v2;
<< " is " << v1 + v2 << std::endl;</code>

## If the program is legal, what does it do?

## If the program is not legal, why not? How would you fix it ?

Ans:

It is illegal.
The second and third lines do not have 'std::cout'.
Adding it in front of the 2nd and 3rd lines will fix the issue.
