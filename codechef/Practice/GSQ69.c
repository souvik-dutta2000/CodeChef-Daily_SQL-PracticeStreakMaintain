// Problem: GSQ69
// Platform: codechef
// Language: Expected output
┌──────┬────────────┬────────┬─────────────┐
│ f_id │   f_name   │ f_cost │   f_type    │
├──────┼────────────┼────────┼─────────────┤
│ 1    │ Pizza      │ 10     │ Continental │
│ 2    │ Burger     │ 8      │ Continental │
│ 3    │ Fried Rice │ 12     │ Chinese     │
└──────┴────────────┴────────┴─────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS04/problems/GSQ69?tab=statement
// Solved on: 2026-10-06T16:16:29.389Z

/* Write a query to output the first 3 rows of the table 'food' */
select * from food
limit 3 ;