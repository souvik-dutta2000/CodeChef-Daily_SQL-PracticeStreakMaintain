// Problem: RSMSPR05C
// Platform: codechef
// Language: ┌─────────────┬──────────────┐
│ customer_id │     name     │
├─────────────┼──────────────┤
│ 6           │ David White  │
│ 7           │ Emily Clark  │
│ 8           │ Frank Harris │
│ 9           │ Grace Kelly  │
│ 10          │ Henry Adams  │
└─────────────┴──────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR05C?tab=solution
// Solved on: 2026-10-27T20:23:24.909Z

BEGIN TRANSACTION;
SAVEPOINT S1;

DELETE FROM Orders
WHERE order_date < '2024-01-20';

--Solution as follows
DELETE FROM Customers
WHERE customer_id NOT IN (SELECT DISTINCT customer_id FROM Orders);
SELECT customer_id, name 
FROM Customers;