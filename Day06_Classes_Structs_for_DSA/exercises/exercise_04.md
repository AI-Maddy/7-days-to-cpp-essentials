# Exercise 04: Bank Account Class

## Task
Create a `BankAccount` class with a balance. Support `deposit` and `withdraw` methods
that update the balance and then print the final balance.

## Input
- Initial balance
- Deposit amount
- Withdraw amount

## Output
The final balance.

## Example
Input:
```
1000
250
300
```
Output:
```
950
```

## Notes
If withdrawal is larger than the balance, ignore the withdrawal.

## Concept Focus
- Encapsulation
- Validation inside methods

## Constraints (Suggested)
- Balances fit in `double`

## Approach
Implement deposit/withdraw with checks and print final balance.

## Edge Cases
- Withdrawal greater than balance
