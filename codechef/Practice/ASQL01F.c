// Problem: ASQL01F
// Platform: codechef
// Language: -- 1. Employee and Manager Names (SELF JOIN)
SELECT e1.employee_name AS Employee, e2.employee_name AS Manager
FROM employees e1
LEFT JOIN employees e2 ON e1.manager_id = e2.employee_id;

-- 2. Every Possible Combination (CROSS JOIN)
SELECT c.customer_name, p.product_name
FROM customers c
CROSS JOIN products p;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS01/problems/ASQL01F?tab=solution
// Solved on: 2026-10-01T15:04:27.790Z

-- 1.Employee and Manager Names: Display a list of employee names along with their manager's names. Use the 'employees' table provided.

-- 2.Every Possible Combination: Show every possible combination of 'customer_name' from the 'customers' table and 'product_name' from the 'products' table.
SELECT e1.employee_name AS Employee, e2.employee_name AS Manager
FROM employees e1
LEFT JOIN employees e2 ON e1.manager_id = e2.employee_id;
SELECT c.customer_name, p.product_name
FROM customers c
CROSS JOIN products p;