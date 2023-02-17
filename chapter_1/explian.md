# Exercise 1.6: Explain whether the following program fragment is legal

- Author: Heng Yin
- Date: 17 Feb

```cpp

std::cout << "The sum of " << v1;  
 << " and " << v2;
<< " is " << v1 + v2 << std::endl;

```

## If the program is legal, what does it do?

## If the program is not legal, why not? How would you fix it ?

# Ans:

It is illegal.
The 2nd and 3rd lines do not have 'std::cout'.
Adding it in front of the 2nd and 3rd lines will fix the issue.


 
