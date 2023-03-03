### Exercise 2.18: Write code to change the value of a pointer. Write code to change the value to which the pointer points.

### Exercise 2.19: Explain the key differences between pointers and references.

### defintion:

    the pointer is "points to" any other type.
    the reference is "another name" of an *object*.

### Key difference:

    1. A reference is another name of an already exisiting object.
       A pointer is an object in its own right.
    2. Once initialized, a reference remains bound to its initial object.
      There is no way to rebind a reference to refer to a different object.
      A pointer can be assigned an copied.
    3. A reference always get the object to which the reference was initially bound.
       A single pointer can point to serveral different objects over its lifetime.
    4. A reference must be initialized.
       A pointer need not be initialized at the time it is defined.

### Exercise 2.20: What does the following program do?

```cpp
  int i = 42; // initialize int i = 42
  int *p1 = &i;  // a int pointer p1 = i address
  *p1 = *p1 * *p1;
```

### Exercise 2.21: Explain each of the following definitions. Indicate whether any are illegal and, if so, why.

```cpp
int i = 0;
(a) double *dp = &i;
(b) int *ip = i;
(c) int *p = &i;
```

// initialized i = 0;
// a: -[x] double pointer dp point to int i
// b: -[x] int pointer ip is dereference to a int varibale
// c: -[Y] int pointer

### Exercise 2.22: Assuming p is a pointer to int, explain the following code:

if (p) // ...
p : int pointer => it is address, always true
whether p is nullptr?

if (\*p) // ...
p : derefer => is pointer's value
whether the value pointed by p is zero?

### Exercise 2.23: Given a pointer p, can you determine whether p points to a valid object? If so, how? If not, why not?

No. Because more information needed to determine whether the pointer is vaild or not.

### Exercise 2.24: Why is the initialization of p legal but that of lp illegal?

int i = 42;
void *p = &i;
long *lp = &i

1. pointer p is void type.
2. lp is long type.
   2_1. i already pointed by p.2_1.
