// Problem: GSQ38
// Platform: codechef
// Language: SELECT MAX(Age)
FROM customer;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS08/problems/GSQ38?tab=solution
// Solved on: 2026-10-27T01:04:06.251Z

/*Write a query to find the highest and lowest 'Hourly_pay' of the employees from the table 'employee'*/


SELECT MAX(Hourly_Pay) as 'max_pay'
FROM employee;
SELECT MIN(Hourly_Pay) as 'min_pay'
FROM employee;