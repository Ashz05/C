# Real-Life Examples

This example shows how you can use `if...else` to "open a door" if the user enters the correct code:

### Example

```C
int doorCode = 1337;
if(doorCode == 1337) {
  printf("Correct code.\nThe door is now open.");
} else {
  printf("Wrong code.\nThe door remains closed.");
}
```

This example shows how you can use `if...else` to find out if a number is positive or negative:

### Example

```C
int myNum = 10; // Is this a positive or negative number?if** (myNum > 0) {**
  printf("The value is a positive number.");
} else if (myNum < 0) {
  printf("The value is a negative number.");
} else {
  printf("The value is 0.");
}
```

Find out if a person is old enough to vote:

### Example

```C
int myAge = 25;
int votingAge = 18; 
if(myAge >= votingAge){
  printf("Old enough to vote!");
} else {
  printf("Not old enough to vote.");
}
```

Find out if a person is old enough to vote, **and **if they are a citizen (using nested if statements):

### Example

```c
int age = 20;
bool isCitizen = true;

if (age >= 18) {
  printf("Old enough to vote.\n");

  if (isCitizen) {
    printf("And you are a citizen, so you can vote!\n");
  } else {
    printf("But you must be a citizen to vote.\n");
  } 
} else {
  printf("Not old enough to vote.\n");
}
```

Find out if a number is even or odd:

### Example

```C
int myNum = 5;
if (myNum % 2 == 0) {
  printf("%d is even.\n", myNum);
} else {
  printf("%d is odd.\n", myNum);
}
```
