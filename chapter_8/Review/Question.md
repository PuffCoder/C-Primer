// Date : 14 June 2023

# 1. What kinds of functions are good candidates for inline status?
运算量小的，函数代码量小的适合做inline status

# 2. Suppose the song() function has this prototype: 
```cpp
void song(const char * name, int times); 
```


## a. How would you modify the prototype so that the default value for times is 1? 
```cpp
  void song(const char * name, int times =1);
```

## b. What changes would you make in the function definition? 
none

## c. Can you provide a default value of "O, My Papa" for name?

```cpp
void song(const char* name = "O, My Papa", int times = 1);

```
