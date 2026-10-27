// Problem: GSQ44
// Platform: codechef
// Language: Expected output
┌───────────────────┐
│ product_total_pay │
├───────────────────┤
│ 20.528            │
└───────────────────┘
┌─────────────┐
│ ops_avg_pay │
├─────────────┤
│ 12.41975    │
└─────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS09/problems/GSQ44?tab=solution
// Solved on: 2026-10-27T01:10:20.154Z

/* Write a query to output the following on separate lines
- Total Payout for the Product department.
- Average Payout for Operations department. */
SELECT SUM(Payout) as 'product_total_pay'
FROM employee
where Department='Product';

SELECT AVG(Payout) as 'ops_avg_pay'
FROM employee
where Department='Operations';