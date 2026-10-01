// Problem: ASQL01G
// Platform: codechef
// Language: -- 1. Product Report (Multiple Joins)
SELECT p.product_name, cat.category_name, c.customer_name, o.order_date
FROM products p
JOIN categories cat
ON p.category_id = cat.category_id
JOIN orders o
ON p.product_name = o.product_name
JOIN customers c
on c.customer_id = o.customer_id;

-- 2. Total Spent by Customer
SELECT
        c.customer_name,
        SUM(p.price * o.quantity) AS total_spent
    FROM
        customers c
    JOIN
        orders o ON c.customer_id = o.customer_id
    JOIN
        products p ON o.product_name = p.product_name
    GROUP BY
        c.customer_name
ORDER BY
    total_spent DESC;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS01/problems/ASQL01G?tab=solution
// Solved on: 2026-10-01T15:05:39.767Z

-- 1.Product Report: List the Product name, with their category names, customer name, and the order date for customers who ordered that particular product.

-- 2.Total Spent by Customer: Create a separate query that shows the customer_name and the total amount spent by each customer across all their orders. In descending order.
SELECT p.product_name, cat.category_name, c.customer_name, o.order_date
FROM products p
JOIN categories cat
ON p.category_id = cat.category_id
JOIN orders o
ON p.product_name = o.product_name
JOIN customers c
on c.customer_id = o.customer_id;
SELECT
        c.customer_name,
        SUM(p.price * o.quantity) AS total_spent
    FROM
        customers c
    JOIN
        orders o ON c.customer_id = o.customer_id
    JOIN
        products p ON o.product_name = p.product_name
    GROUP BY
        c.customer_name
ORDER BY
    total_spent DESC;