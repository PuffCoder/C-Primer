# Exercise 2.2: To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type

Auther : ChatGPT
Date : 25 Feb 2023

To calculate a mortgage payment, the following data types would be appropriate for the rate, principal, and payment:

Rate: double. The interest rate for a mortgage is typically a decimal number, such as 3.5%. Using a double data type allows for storing the decimal values accurately, which is important for calculating the mortgage payment correctly.
Principal: long or long long. The principal is the amount of money borrowed to purchase a property. Since this amount can be quite large, it is appropriate to use a larger data type to store it accurately. A long data type can store values up to 9,223,372,036,854,775,807, which is sufficient for most mortgage principal amounts. If even larger values are needed, a long long data type can be used.
Payment: double. The monthly mortgage payment is typically a decimal number, which is why using a double data type is appropriate for storing the payment amount accurately.
It is important to choose the appropriate data types for each variable in order to ensure accurate calculations and avoid any potential errors that can arise from data type mismatches.
