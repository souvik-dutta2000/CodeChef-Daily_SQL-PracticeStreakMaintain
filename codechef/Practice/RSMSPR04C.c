// Problem: RSMSPR04C
// Platform: codechef
// Language: ┌────────────┬─────────────────┬─────────────┬──────────┬────────────────┐
│ product_id │      name       │  category   │  price   │ stock_quantity │
├────────────┼─────────────────┼─────────────┼──────────┼────────────────┤
│ 101        │ Apple iPhone 15 │ Electronics │ 999.99   │ 0              │
└────────────┴─────────────────┴─────────────┴──────────┴────────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR04C?tab=solution
// Solved on: 2026-10-27T20:19:53.775Z

/* Update your query here*/
UPDATE Products
SET stock_quantity = 0
WHERE stock_quantity = 10;

SELECT * FROM Products 
WHERE stock_quantity = 0;