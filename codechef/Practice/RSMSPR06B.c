// Problem: RSMSPR06B
// Platform: codechef
// Language: ┌───────────────────────────┐
│ avg_spending_per_customer │
├───────────────────────────┤
│ 599.99                    │
└───────────────────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR06B
// Solved on: 2026-11-03T19:45:00.981Z

/* Update your query here*/
SELECT AVG(customer_total) AS avg_spending_per_customer
FROM (
    SELECT customer_id, SUM(total_amount) AS customer_total
    FROM Orders
    GROUP BY customer_id
) AS customer_spending;