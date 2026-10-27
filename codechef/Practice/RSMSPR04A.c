// Problem: RSMSPR04A
// Platform: codechef
// Language: ┌─────────────────┬──────────┬────────────────┐
│      name       │  price   │ stock_quantity │
├─────────────────┼──────────┼────────────────┤
│ Apple iPhone 15 │ 1099.989 │ 10             │
└─────────────────┴──────────┴────────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR04A?tab=solution
// Solved on: 2026-10-27T20:15:36.908Z

/* Update your query here*/
UPDATE Products
SET price = price * 1.10
WHERE category = 'Electronics';

SELECT name, price, stock_quantity
FROM Products 
WHERE category = 'Electronics'
LIMIT 1;