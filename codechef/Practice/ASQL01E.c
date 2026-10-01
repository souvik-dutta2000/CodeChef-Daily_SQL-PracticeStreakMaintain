// Problem: ASQL01E
// Platform: codechef
// Language: ┌────────────────┬──────────┬─────────────┬──────────────┬────────────┬──────────┐
│ customer_name  │ order_id │ customer_id │ product_name │ order_date │ quantity │
├────────────────┼──────────┼─────────────┼──────────────┼────────────┼──────────┤
│ Alice Smith    │ 1        │ 1           │ Laptop       │ 2024-01-15 │ 1        │
│ Alice Smith    │ 2        │ 1           │ Mouse        │ 2024-01-15 │ 2        │
│ Bob Johnson    │ 3        │ 2           │ Keyboard     │ 2024-01-20 │ 1        │
│ Carol Williams │ 4        │ 3           │ Monitor      │ 2024-01-22 │ 1        │
└────────────────┴──────────┴─────────────┴──────────────┴────────────┴──────────┘
┌──────────────┬───────────────┐
│ product_name │ category_name │
├──────────────┼───────────────┤
│ Laptop       │ Electronics   │
│ Mouse        │ Accessories   │
│ Keyboard     │ Accessories   │
│ Monitor      │ Electronics   │
│ Webcam       │ Accessories   │
│ Tablet       │ Tablets       │
└──────────────┴───────────────┘
┌───────────────┬──────────────┬───────┐
│ category_name │ product_name │ price │
├───────────────┼──────────────┼───────┤
│ Electronics   │ Laptop       │ 1200  │
│ Accessories   │ Mouse        │ 25    │
│ Accessories   │ Keyboard     │ 75    │
│ Electronics   │ Monitor      │ 300   │
│ Accessories   │ Webcam       │ 60    │
│ Tablets       │ Tablet       │ 250   │
└───────────────┴──────────────┴───────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS01/problems/ASQL01E?tab=solution
// Solved on: 2026-10-01T15:03:24.052Z

-- 1.All orders with Customers Details: Get all of the orders table and also the details of respective customers if they exist. Use the customer and orders table.

-- 2.Products and Categories: Create a combined list of all products and all categories. Include all product names and all category names. Where there's a match, show both; otherwise, use NULLs.

-- 3.All category names with product details: display category_name, along with all product names and price from all the categories present in categories table.
SELECT c.customer_name, o.*
FROM customers c
RIGHT JOIN orders o ON c.customer_id = o.customer_id;
SELECT p.product_name, c.category_name
FROM products p
FULL OUTER JOIN categories c ON p.category_id = c.category_id;
select c.category_name, p.product_name, p.price
from products p
RIGHT JOIN categories c
on p.category_id = c.category_id;