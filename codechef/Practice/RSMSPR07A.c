// Problem: RSMSPR07A
// Platform: codechef
// Language: ┌─────────────┬─────────────┬─────────────┐
│ customer_id │    name     │ new_address │
├─────────────┼─────────────┼─────────────┤
│ 1           │ John Doe    │ NULL        │
│ 2           │ Jane Smith  │ NULL        │
│ 3           │ Alice Brown │ NULL        │
└─────────────┴─────────────┴─────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR07A
// Solved on: 2026-11-03T19:46:05.780Z

/* Update your query here*/
UPDATE Customers
SET new_address = NULL
WHERE new_address = 'Unknown';

SELECT customer_id, name, new_address
FROM Customers LIMIT 3;