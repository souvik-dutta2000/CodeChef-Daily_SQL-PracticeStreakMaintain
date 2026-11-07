// Problem: GSQ41
// Platform: codechef
// Language: Expected output
┌────────┐
│ payout │
├────────┤
│ 22.66  │
│ 6.55   │
│ 25.18  │
│ 0.71   │
│ 24.0   │
│ 5.48   │
│ 18.56  │
│ 13.65  │
│ 18.73  │
│ 19.82  │
└────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS08/problems/GSQ41
// Solved on: 2026-11-07T17:04:08.333Z

/* Write a query to output the following:
- Round the column **Payout** to 2 decimal places. */

SELECT ROUND(Payout, 2) as 'payout'
FROM employee;