// Problem: GSQ45
// Platform: codechef
// Language: SELECT Divisions,AVG(Age)
FROM student
GROUP BY Divisions;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS09/problems/GSQ45?tab=solution
// Solved on: 2026-10-27T01:11:14.203Z

 /* Write a query to find the Average of the column 'Payout' across 'Department' from the table 'employee'. The output table should have the average payout of each department.*/

SELECT Department,
AVG(Payout) as 'avg_payout'
FROM employee
GROUP BY Department;