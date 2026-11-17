## Order of Operations

Here are some common operators in C, from highest to lowest priority:

* `()` - Parentheses
* `*`, `/`, `%` - Multiplication, Division, Modulus
* `+`, `-` - Addition, Subtraction
* `>`, `<`, `>=`, `<=` - Comparison
* `==`, `!=` - Equality
* `&&` - Logical AND
* `||` - Logical OR
* `=` - Assignment

## Another Example

Subtraction and addition are done from left to right, unless you add parentheses:

### Example

```c
int result1 = 10 - 2 + 5;    // (10 - 2) + 5 = 13
int result2 = 10 - (2 + 5);  // 10 - 7 = 3

printf("%d\n", result1);
printf("%d\n", result2);
```

### Why Does This Happen?

In `2 + 3 * 4`, the multiplication is done first, so the answer is `14`.

If you want the addition to happen first, you must use parentheses: `(2 + 3) * 4`, which gives `20`.
