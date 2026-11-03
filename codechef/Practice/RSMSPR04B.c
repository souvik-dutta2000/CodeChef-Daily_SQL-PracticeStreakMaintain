// Problem: RSMSPR04B
// Platform: codechef
// Language: ┌──────────┬──────────────┬──────────┐
│ order_id │ total_amount │ discount │
├──────────┼──────────────┼──────────┤
│ 1001     │ 999.99       │ 0.0      │
└──────────┴──────────────┴──────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR04B
// Solved on: 2026-11-03T19:42:38.173Z

/* Update your query here*/
ALTER TABLE Orders ADD COLUMN discount REAL DEFAULT 0;
SELECT order_id, total_amount, discount 
FROM Orders
LIMIT 1;