// Problem: GSQ38
// Platform: codechef
// Language: SELECT MAX(Age)
FROM customer;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS08/problems/GSQ38
// Solved on: 2026-11-05T19:06:36.217Z

/*Write a query to find the highest and lowest 'Hourly_pay' of the employees from the table 'employee'*/


SELECT MAX(Hourly_Pay) as 'max_pay'
FROM employee;
SELECT MIN(Hourly_Pay) as 'min_pay'
FROM employee;