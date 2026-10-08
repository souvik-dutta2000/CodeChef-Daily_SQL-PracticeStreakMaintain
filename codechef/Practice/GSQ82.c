// Problem: GSQ82
// Platform: codechef
// Language: SELECT department, 
       COUNT(CASE WHEN salary> 200000 THEN 1 ELSE NULL END) as High_Salary 
       FROM employee
       GROUP BY department;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS08/problems/GSQ82?tab=solution
// Solved on: 2026-10-08T04:39:52.831Z

/* Write a query to count the number of students across departments who has scored more than 80 marks.*/
SELECT department, 
COUNT(CASE WHEN Marks> 80 THEN 1 ELSE NULL END) AS Dept_HighScore_Count
FROM student
GROUP BY department;