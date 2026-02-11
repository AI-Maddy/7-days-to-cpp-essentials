# Exercise 03: Queue with Linked List

## Task
Implement a simple queue using linked list nodes with `enqueue` and `dequeue`.
Read `n` values, enqueue them, then dequeue one value and print the front and size.

## Input
- Integer `n`
- `n` integers

## Output
Two values: the front element after one dequeue, and the current size.

## Example
Input:
```
4
10 20 30 40
```
Output:
```
20 3
```

## Notes
Keep pointers to both head and tail for $O(1)$ enqueue/dequeue.

## Concept Focus
- Queue operations
- Linked list management

## Constraints (Suggested)
- $1 <= n <= 10^5$

## Approach
Maintain head/tail pointers and update size on enqueue/dequeue.

## Edge Cases
- Dequeue when size becomes zero
