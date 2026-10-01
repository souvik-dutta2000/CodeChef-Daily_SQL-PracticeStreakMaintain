// Problem: ASQL01D
// Platform: codechef
// Language: -- Customers and Orders: List the customer_name and order_date for all customers who have placed orders.

-- All Customers and Their Orders: List all customer names and their corresponding product_name from orders, if they have any. Include customers even if they haven't placed any orders.

-- Find Products and Their Orders: Display Product Name and the order_date from all the products that are ordered.
select c.customer_name,o.order_date from c.customers inner join o.Orders on c.customer_id=o.customer_id ;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS01/problems/ASQL01D?tab=Help
// Solved on: 2026-10-01T14:02:34.859Z

-- Customers and Orders: List the customer_name and order_date for all customers who have placed orders.

-- All Customers and Their Orders: List all customer names and their corresponding product_name from orders, if they have any. Include customers even if they haven't placed any orders.

-- Find Products and Their Orders: Display Product Name and the order_date from all the products that are ordered.
select c.customer_name,o.order_date from customers c inner join Orders o on c.customer_id = o.customer_id ;
select c.customer_name,o.product_name from Customers c left join orders o on c.customer_id = o.customer_id;
select p.product_name,o.order_date from products p inner join orders o on p.product_name = o.product_name;