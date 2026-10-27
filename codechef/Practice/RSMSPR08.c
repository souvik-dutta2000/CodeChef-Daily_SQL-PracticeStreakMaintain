// Problem: RSMSPR08
// Platform: codechef
// Language: --Query 1
SELECT order_id, customer_id, order_date FROM Orders 
WHERE strftime('%Y-%m', order_date) = '2024-01';

--Query 2
SELECT MAX(order_date) AS most_recent_order
FROM Orders;

--Query 3
SELECT order_date, COUNT(*) AS order_count
FROM Orders
WHERE order_date BETWEEN '2024-01-15' AND '2024-01-17'
GROUP BY order_date;

--Query 4
SELECT JULIANDAY(MAX(order_date)) - JULIANDAY(MIN(order_date)) AS days_between
FROM Orders;

--Query 5
SELECT order_id, customer_id, order_date, total_amount 
FROM Orders
WHERE order_date BETWEEN DATE('2024-01-24', '-5 days') AND DATE('2024-01-23');
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR08?tab=solution
// Solved on: 2026-10-27T20:26:46.517Z

/* Write all the 5 queries here and RUN/SUBMIT them all at once*/
--Query 1
SELECT order_id, customer_id, order_date FROM Orders 
WHERE strftime('%Y-%m', order_date) = '2024-01';

--Query 2
SELECT MAX(order_date) AS most_recent_order
FROM Orders;

--Query 3
SELECT order_date, COUNT(*) AS order_count
FROM Orders
WHERE order_date BETWEEN '2024-01-15' AND '2024-01-17'
GROUP BY order_date;

--Query 4
SELECT JULIANDAY(MAX(order_date)) - JULIANDAY(MIN(order_date)) AS days_between
FROM Orders;

--Query 5
SELECT order_id, customer_id, order_date, total_amount 
FROM Orders
WHERE order_date BETWEEN DATE('2024-01-24', '-5 days') AND DATE('2024-01-23');