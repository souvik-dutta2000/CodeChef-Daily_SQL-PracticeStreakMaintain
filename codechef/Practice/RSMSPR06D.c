// Problem: RSMSPR06D
// Platform: codechef
// Language: ┌─────────────────┬──────────┐
│      name       │  price   │
├─────────────────┼──────────┤
│ Apple iPhone 15 │ 1099.989 │
└─────────────────┴──────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR06D
// Solved on: 2026-11-03T19:45:52.642Z

ROLLBACK TO S1;

/* Update your query below this line*/
ROLLBACK TO S1;

--Solutions as follows
SELECT name, price 
FROM Products
WHERE price = (SELECT MAX(price) FROM Products);