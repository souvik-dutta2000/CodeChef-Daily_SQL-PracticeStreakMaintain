// Problem: RSMSPR03C
// Platform: codechef
// Language: ┌────────────┬──────────────────┬─────────────┬────────┬────────────────┐
│ product_id │       name       │  category   │ price  │ stock_quantity │
├────────────┼──────────────────┼─────────────┼────────┼────────────────┤
│ 101        │ Apple iPhone 15  │ Electronics │ 999.99 │ 10             │
│ 109        │ Sofa Set (3+1+1) │ Furniture   │ 999.99 │ 4              │
└────────────┴──────────────────┴─────────────┴────────┴────────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR03C
// Solved on: 2026-11-03T19:41:52.580Z

/* Update your query here */
SELECT * FROM Products ORDER BY price DESC LIMIT 2;