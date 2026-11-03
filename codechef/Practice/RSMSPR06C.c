// Problem: RSMSPR06C
// Platform: codechef
// Language: SELECT strftime('%Y-%m', order_date) AS order_month
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR06C
// Solved on: 2026-11-03T19:45:12.979Z

ROLLBACK TO S1;

/* Update your query below this line*/
ROLLBACK TO S1;

--Solution as follows
SELECT strftime('%Y-%m', order_date) AS order_month, COUNT(order_id) AS total_orders 
FROM Orders
GROUP BY order_month
ORDER BY order_month;