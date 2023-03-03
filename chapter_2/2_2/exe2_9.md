### Exercise 2.9: Explain the following definitions.

### For those that are illegal, explain what’s wrong and how to correct it.

## (a) std::cin >> int input_value;

use an int variable input_value before initialize.

```cpp
int input_value = 0;
std::cin >> inpute_value;
```

## (b) int i = { 3.14 };

variable i is an int, but it was initialized decimal

```cpp
float i{3.14};
// or
float i = {3.14};
// or
float i = 3.14;
// or
float i(3.14);

```

## (c) double salary = wage = 9999.99;

```cpp
  double salary{9999.99}, wage(9999.99);
```

## (d) int i = 3.14;

```cpp
double i = 3.14;
}
```
