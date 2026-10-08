// Problem: GSQ84
// Platform: codechef
// Language: SELECT Department,
       (100*(SUM(CASE WHEN Exp >3 THEN Salary ELSE 0 END))/SUM(Salary)) as High_Salary_percentage 
       FROM employee
       GROUP BY 1;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS08/problems/GSQ84?tab=solution
// Solved on: 2026-10-08T04:41:07.004Z

/* Write a query to find the percentage of fee paid by the students, aged above 20  to the total fee by all the students across department.\
Alias the resulting percentage column as Senior_Fee_Percentage*/
SELECT Department,
       (100*(SUM(CASE WHEN Age >20 THEN Fee ELSE 0 END))/sum(Fee)) as Senior_Fee_Percentage 
       FROM student
       GROUP BY 1;