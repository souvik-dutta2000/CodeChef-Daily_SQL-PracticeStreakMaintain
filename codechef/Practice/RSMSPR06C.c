// Problem: RSMSPR06C
// Platform: codechef
// Language: SELECT strftime('%Y-%m', order_date) AS order_month
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR06C?tab=solution
// Solved on: 2026-10-27T20:25:02.104Z

ROLLBACK TO S1;

/* Update your query below this line*/
ROLLBACK TO S1;

--Solution as follows
SELECT strftime('%Y-%m', order_date) AS order_month, COUNT(order_id) AS total_orders 
FROM Orders
GROUP BY order_month
ORDER BY order_month;