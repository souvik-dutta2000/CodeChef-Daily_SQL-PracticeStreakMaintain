// Problem: RSMSPR04A
// Platform: codechef
// Language: ┌─────────────────┬──────────┬────────────────┐
│      name       │  price   │ stock_quantity │
├─────────────────┼──────────┼────────────────┤
│ Apple iPhone 15 │ 1099.989 │ 10             │
└─────────────────┴──────────┴────────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR04A
// Solved on: 2026-11-03T19:42:23.776Z

/* Update your query here*/
UPDATE Products
SET price = price * 1.10
WHERE category = 'Electronics';

SELECT name, price, stock_quantity
FROM Products 
WHERE category = 'Electronics'
LIMIT 1;