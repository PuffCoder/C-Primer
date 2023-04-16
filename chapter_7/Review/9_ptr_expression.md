# 9. What does the expression \*"pizza" mean? What about "taco"[2]?

\*pizze: means a pointer;

taco[2]: means a pointer point to a array "taco" third address;

The expression "pizza" is a string literal in C++, which represents a null-terminated character array with the value "pizza". The _ operator when applied to a string literal returns the first character of the array, which is 'p' in this case. Therefore, the expression _"pizza" is equivalent to the character literal 'p'.

The expression "taco" is also a string literal in C++, which represents a null-terminated character array with the value "taco". The square bracket notation [] when applied to a string literal or an array allows you to access individual characters of the array by their index. In this case, "taco"[2] refers to the third character of the array (counting from zero), which is 'c'. Therefore, "taco"[2] is equivalent to the character literal 'c'.
