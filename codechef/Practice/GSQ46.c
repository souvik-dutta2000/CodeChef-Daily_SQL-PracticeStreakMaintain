// Problem: GSQ46
// Platform: codechef
// Language: SELECT Division,
AVG(Age),
COUNT(*)
FROM student
GROUP BY Division
HAVING COUNT(*) > 50;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS09/problems/GSQ46?tab=solution
// Solved on: 2026-10-27T01:11:33.350Z

 /* Write a query to find out the average Payout across department which has more than 3 employees from the table employee.
The output table should have the name of the department and their respective average pay. */
SELECT Department, 
AVG(Payout) as 'avg_payout'
FROM employee
GROUP BY Department
HAVING COUNT(*) > 3;