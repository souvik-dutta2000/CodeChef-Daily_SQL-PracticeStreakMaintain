// Problem: GSQ70
// Platform: codechef
// Language: SELECT * 
FROM customers
WHERE customer_id IN ( 
     SELECT customer_id 
     FROM orders
     WHERE order_value >1000);
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS04/problems/GSQ70?tab=statement
// Solved on: 2026-10-06T16:17:45.096Z

/* Write a query to fetch Name and type of the food from the table 'food' which has got rating  less than 3 in the table 'ratings'.*/
SELECT f_name, f_type
FROM food
WHERE f_id in (
    SELECT f_id
    FROM ratings
    WHERE f_rating < 3
    );