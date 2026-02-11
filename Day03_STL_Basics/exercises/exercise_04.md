# Exercise 04: Anagram Check

## Task
Read two strings and check if they are anagrams (same letters with the same counts).

## Input
Two strings on separate lines.

## Output
Print `YES` if they are anagrams, otherwise print `NO`.

## Example
Input:
```
listen
silent
```
Output:
```
YES
```

## Notes
Ignore case only if you choose to normalize it. Use a map or array to count characters.

## Concept Focus
- Counting characters
- String comparison

## Constraints (Suggested)
- String length up to $10^5$

## Approach
Count characters in the first string and subtract using the second.

## Edge Cases
- Different lengths
- Repeated characters
