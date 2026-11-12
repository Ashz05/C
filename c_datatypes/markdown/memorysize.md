## Get the Memory Size

We introduced in the [data types chapter](https://www.w3schools.com/c/c_data_types.php) that the memory size of a variable varies depending on the type:

| Data Type  | Size         |
| ---------- | ------------ |
| `int`    | 2 or 4 bytes |
| `float`  | 4 bytes      |
| `double` | 8 bytes      |
| `char`   | 1 byte       |

The memory size refers to how much space a type occupies in the  *computer's memory* .

## More Data Types

Besides the basic types (`int`, `float`, `double`, `char`), C also gives you **extended keywords** (`short`, `long`, `unsigned`) to control how large the number is, or whether it can be negative:

| Type                       | Size*              | Range (commonly)                                                                                           | Format Specifier |
| -------------------------- | ------------------ | ---------------------------------------------------------------------------------------------------------- | ---------------- |
| `short int`              | 2 bytes            | -32,768 to 32,767                                                                                          | `%hd`          |
| `unsigned int`           | 2 or 4 bytes       | 0 to 65,535 (2 bytes)0 to 4,294,967,295 (4 bytes)                                                          | `%u`           |
| `long int`               | 4 or 8 bytes       | -2,147,483,648 to 2,147,483,647 (4 bytes)-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (8 bytes) | `%ld`          |
| `long long int`          | 8 bytes            | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807                                                    | `%lld`         |
| `unsigned long int`      | 4 or 8 bytes       | 0 to 4,294,967,295 (4 bytes)0 to 18,446,744,073,709,551,615 (8 bytes)                                      | `%lu`          |
| `unsigned long long int` | 8 bytes            | 0 to 18,446,744,073,709,551,615                                                                            | `%llu`         |
| `long double`            | 8, 12, or 16 bytes | Implementation-dependent, but more precision than`double`                                                | `%Lf`          |
