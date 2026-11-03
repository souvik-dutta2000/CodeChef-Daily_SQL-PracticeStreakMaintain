// Problem: RSMSPR04E
// Platform: codechef
// Language: ┌──────────┬──────────────┬──────────┐
│ order_id │ total_amount │ discount │
├──────────┼──────────────┼──────────┤
│ 1001     │ 999.99       │ 49.9995  │
└──────────┴──────────────┴──────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR04E
// Solved on: 2026-11-03T19:43:17.780Z

/* Update your query here */
ALTER TABLE Orders ADD COLUMN discount REAL DEFAULT 0;

UPDATE Orders
SET discount = total_amount * 0.05
WHERE total_amount > 900;

SELECT order_id, total_amount, discount 
FROM Orders
WHERE discount >0;