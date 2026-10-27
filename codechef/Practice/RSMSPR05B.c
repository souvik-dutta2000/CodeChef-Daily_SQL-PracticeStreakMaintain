// Problem: RSMSPR05B
// Platform: codechef
// Language: ┌──────────┬─────────────┬────────────┬──────────────┐
│ order_id │ customer_id │ order_date │ total_amount │
├──────────┼─────────────┼────────────┼──────────────┤
│ 1006     │ 6           │ 2024-01-20 │ 499.99       │
│ 1007     │ 7           │ 2024-01-21 │ 129.99       │
│ 1008     │ 8           │ 2024-01-22 │ 699.99       │
│ 1009     │ 9           │ 2024-01-23 │ 25.99        │
│ 1010     │ 10          │ 2024-01-24 │ 15.99        │
└──────────┴─────────────┴────────────┴──────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR05B?tab=Help
// Solved on: 2026-10-27T20:22:57.411Z

BEGIN TRANSACTION;
SAVEPOINT S1;

-- Delete orders placed before 2024-01-20
DELETE FROM Orders
WHERE order_date < '2024-01-20';

-- Retrieve the remaining orders
SELECT order_id, customer_id, order_date, total_amount 
FROM Orders;