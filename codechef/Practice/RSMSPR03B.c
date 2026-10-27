// Problem: RSMSPR03B
// Platform: codechef
// Language: ┌──────────┬─────────────┬────────────┬──────────────┬────────────────┐
│ order_id │ customer_id │ order_date │ total_amount │ Remarks_if_any │
├──────────┼─────────────┼────────────┼──────────────┼────────────────┤
│ 1001     │ 1           │ 2024-01-15 │ 999.99       │ No Remarks     │
└──────────┴─────────────┴────────────┴──────────────┴────────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR03B?tab=solution
// Solved on: 2026-10-27T20:14:35.711Z

/* Update your query below*/
SELECT * FROM Orders WHERE total_amount > 900;