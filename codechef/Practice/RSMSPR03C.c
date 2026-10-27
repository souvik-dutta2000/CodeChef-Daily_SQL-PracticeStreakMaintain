// Problem: RSMSPR03C
// Platform: codechef
// Language: ┌────────────┬──────────────────┬─────────────┬────────┬────────────────┐
│ product_id │       name       │  category   │ price  │ stock_quantity │
├────────────┼──────────────────┼─────────────┼────────┼────────────────┤
│ 101        │ Apple iPhone 15  │ Electronics │ 999.99 │ 10             │
│ 109        │ Sofa Set (3+1+1) │ Furniture   │ 999.99 │ 4              │
└────────────┴──────────────────┴─────────────┴────────┴────────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR03C?tab=solution
// Solved on: 2026-10-27T20:14:59.709Z

/* Update your query here */
SELECT * FROM Products ORDER BY price DESC LIMIT 2;