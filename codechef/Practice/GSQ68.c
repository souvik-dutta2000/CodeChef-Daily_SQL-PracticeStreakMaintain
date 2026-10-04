// Problem: GSQ68
// Platform: codechef
// Language: Expected output
┌─────────────┬───────────────┬──────────────┐
│ Customer_id │ Customer_Name │ Customer_Age │
├─────────────┼───────────────┼──────────────┤
│ 1           │ John          │ 15           │
│ 2           │ Sara          │ 16           │
│ 3           │ Adam          │ 17           │
└─────────────┴───────────────┴──────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS03/problems/GSQ68?tab=statement
// Solved on: 2026-10-04T17:43:27.691Z

/* Write a query to output the table 'Customer'. Limit your results to 3 rows. */
select * from customer
limit 3;