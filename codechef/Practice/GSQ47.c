// Problem: GSQ47
// Platform: codechef
// Language: Expected output
┌────────────┬──────────────────┐
│ Department │   avg_payout     │
├────────────┼──────────────────┤
│ Hr         │ 23.9886666666667 │
│ Operations │ 11.227           │
│ Sales      │ 20.34625         │
└────────────┴──────────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS09/problems/GSQ47?tab=solution
// Solved on: 2026-10-27T01:16:54.996Z

/* Write a query to output the following
- Department and average payout on a single line
- Where total payout of the department is more than 40. */
SELECT Department, 
   Avg(Payout) as 'avg_payout'
FROM employee
GROUP BY Department
HAVING Sum(Payout) > 40;