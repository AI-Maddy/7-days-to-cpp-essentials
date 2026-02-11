# Exercise 01: Linked List Insert at Head

## Task
Create a `Node` struct for a singly linked list. Read `n` values, insert each at the head,
then print the list.

## Input
- Integer `n`
- `n` integers

## Output
The linked list values from head to tail, space-separated.

## Example
Input:
```
3
1 2 3
```
Output:
```
3 2 1
```

## Notes
Each new node becomes the new head. Remember to free allocated memory.

## Concept Focus
- Node creation
- Linked list insertion

## Constraints (Suggested)
- $1 <= n <= 10^5$

## Approach
Insert each new value at the head and then traverse to print.

## Edge Cases
- `n = 1`
