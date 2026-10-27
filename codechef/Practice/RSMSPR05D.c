// Problem: RSMSPR05D
// Platform: codechef
// Language: ┌──────────┬─────────────┬──────────────┐
│ order_id │ customer_id │ total_amount │
├──────────┼─────────────┼──────────────┤
│ 1001     │ 1           │ 999.99       │
│ 1002     │ 2           │ 299.98       │
│ 1004     │ 4           │ 899.99       │
│ 1005     │ 5           │ 799.99       │
│ 1006     │ 6           │ 499.99       │
│ 1008     │ 8           │ 699.99       │
└──────────┴─────────────┴──────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR05D?tab=Help
// Solved on: 2026-10-27T20:24:05.768Z

BEGIN TRANSACTION;
SAVEPOINT S1;
--Savepoint created incase any changes to the the database beyond this point has to be undone in the future.

/* Update your query below this line*/
DELETE FROM Orders
WHERE total_amount < 150;

SELECT order_id, customer_id, total_amount 
FROM Orders;