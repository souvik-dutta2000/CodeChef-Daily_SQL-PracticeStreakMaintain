// Problem: GSQ83
// Platform: codechef
// Language: SELECT Department,
       SUM(CASE WHEN Exp >3 THEN Salary ELSE 0 END) as Sum_High_Salary 
       FROM employee
       GROUP BY 1;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS08/problems/GSQ83?tab=solution
// Solved on: 2026-10-08T04:40:20.426Z

/* Write a query to find the sum of fee paid by the students, aged above 20 across departments.
Alias the sum column as 'Sum_Senior_Fee'.*/
SELECT Department,
SUM(CASE WHEN Age >20 THEN Fee ELSE 0 END) as Sum_Senior_Fee 
FROM student
GROUP BY 1;