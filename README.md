# Exception-Handing

# Exception Handling and Recursion in C++

## 📖 Theory: Exception Handling in C++

Exception handling in C++ is a mechanism to handle **runtime errors** in a structured way, without abruptly terminating the program.  
It ensures the program can detect, handle, and recover from unexpected events.

### Key Keywords:
- **`try`** → Defines a block of code to test for exceptions.  
- **`throw`** → Used to signal an error (exception).  
- **`catch`** → Defines a block of code that handles the error.  

**General syntax:**

try {
    // code that may cause an exception
    if (condition) {
        throw exceptionObject;  // throw error
    }
}
catch (datatype var) {
    // code to handle exception
}


**Flow of exception handling:**
1. The code inside `try` executes.  
2. If an error occurs, `throw` sends control to the corresponding `catch` block.  
3. If no error occurs, the `catch` block is skipped.  

This improves **program robustness** by avoiding crashes and giving meaningful error messages.

---
## 📝 Algorithms

### 1. Division with Exception Handling
**Problem**: Perform division of two numbers, handle division by zero.  

**Algorithm:**
1. Start program.  
2. Input two numbers `n1` and `n2`.  
3. Begin `try` block:  
   - If `n2 == 0`, throw `n2`.  
   - Else, calculate `ans = n1 / n2`.  
   - Display `ans`.  
4. If exception is thrown, control goes to `catch` block.  
5. In `catch`, display `"ERROR: Division by 0"`.  
6. End program.  

---

### 2. Recursive String Reversal
**Problem**: Reverse a string using recursion.  

**Algorithm:**
1. Start program.  
2. Input a string `s`.  
3. Call recursive function `reverseString(x, i)`:  
   - If `i == last index`, return last character (**base case**).  
   - Else, recursively call `reverseString` for the next index and append current character.  
4. Store result in `rev`.  
5. Print `rev` as the reversed string.  
6. End program.  

---

### 3. Recursive Factorial Calculation
**Problem**: Find factorial of a number `n`.  

**Algorithm:**
1. Start program.  
2. Input a number `n`.  
3. If `n < 0`, print error `"Factorial not defined"`.  
4. Else, call recursive function `factorial(n)`:  
   - If `n == 0 or n == 1`, return `1` (**base case**).  
   - Else, return `n * factorial(n-1)`.  
5. Print the result.  
6. End program.  

---

### 4. Recursive Sum of Natural Numbers
**Problem**: Find sum of first `n` natural numbers using recursion.  

**Algorithm:**
1. Start program.  
2. Input a number `n`.  
3. Call recursive function `sum(n)`:  
   - If `n == 0`, return `1`.  
   - If `n == 1`, return `1`.  
   - Else, return `n + sum(n-1)`.  
4. Print the result.  
5. End program.  


## ✅ Summary
- Exception handling ensures safe program execution by handling runtime errors.  
- Recursion helps solve problems by breaking them into smaller subproblems.  
- This README covers **division exception handling, string reversal, factorial, and sum calculation** using recursion in C++.
