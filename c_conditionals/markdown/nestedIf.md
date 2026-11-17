## Nested If

You can also place an `if` statement inside another `if`. This is called a **nested if** statement.

A nested `if` lets you check for a condition only if another condition is already `true`.

### Syntax

```c
if (condition1) {
  // code to run if condition1 is true
  if (condition2) {
    // code to run if both condition1 and condition2 are true
  }
}
```

---

## Example

In this example, we first check if `x` is greater than 10. If it is, we then check if `y` is greater than 20:

### Example

```c
int x = 15;
int y = 25;

if (x > 10) {
  printf("x is greater than 10\n");

  // Nested if
  if (y > 20) {
    printf("y is also greater than 20\n");
  }
}
```
