// Problem: RSMSPR06D
// Platform: codechef
// Language: ┌─────────────────┬──────────┐
│      name       │  price   │
├─────────────────┼──────────┤
│ Apple iPhone 15 │ 1099.989 │
└─────────────────┴──────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR06D?tab=solution
// Solved on: 2026-10-27T20:25:20.119Z

ROLLBACK TO S1;

/* Update your query below this line*/
ROLLBACK TO S1;

--Solutions as follows
SELECT name, price 
FROM Products
WHERE price = (SELECT MAX(price) FROM Products);