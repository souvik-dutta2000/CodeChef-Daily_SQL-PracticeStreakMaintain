// Problem: GSQ39
// Platform: codechef
// Language: SELECT ROUND(Total_Purchase, 1)
FROM CUSTOMER;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS08/problems/GSQ39
// Solved on: 2026-11-07T17:00:03.595Z

/* Write a query to round the **Taxable_Pay** to 2 decimal place from the table employee. */

SELECT ROUND(Taxable_Pay, 2) as 'taxable_pay'
FROM employee;