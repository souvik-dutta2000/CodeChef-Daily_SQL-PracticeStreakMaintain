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
// URL: https://www.codechef.com/learn/course/sql/SQ00LS08/problems/GSQ41?tab=solution
// Solved on: 2026-10-27T01:05:35.001Z

/* Write a query to output the following:
- Round the column **Payout** to 2 decimal places. */

SELECT ROUND(Payout, 2) as 'payout'
FROM employee;