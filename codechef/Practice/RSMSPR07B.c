// Problem: RSMSPR07B
// Platform: codechef
// Language: ┌─────────────┬─────────────┬───────────────────┬────────────┬────────────────┬────────────────┐
│ customer_id │    name     │       email       │   phone    │    address     │  new_address   │
├─────────────┼─────────────┼───────────────────┼────────────┼────────────────┼────────────────┤
│ 10          │ Henry Adams │ henry.a@email.com │ 9312465789 │ 22 Walnut Lane │ 23 Walnut Lane │
└─────────────┴─────────────┴───────────────────┴────────────┴────────────────┴────────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR07B?tab=solution
// Solved on: 2026-10-27T20:26:06.901Z

UPDATE Customers
SET new_address = NULL
WHERE new_address = 'Unknown';

--Solution as follows
UPDATE Customers
SET new_address = '23 Walnut Lane'
WHERE customer_id = 10 AND name = 'Henry Adams' AND new_address IS NULL;

SELECT * FROM Customers
WHERE customer_id = 10;
