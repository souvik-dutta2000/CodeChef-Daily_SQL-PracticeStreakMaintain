// Problem: GSQ67
// Platform: codechef
// Language: WITH top_employee AS(     -- This table has only 2 columns - 'name' and 'emp_id'
 SELECT name,emp_id
 FROM employee
 ORDER BY salary DESC
 LIMIT 3                   -- This table has only 3 rows - highest paid employees
 )
 SELECT top_employee.name,department.dept_name
 FROM top_employee
 JOIN department
 ON top_employee.emp_id=department.emp_id;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS02/problems/GSQ67?tab=statement
// Solved on: 2026-10-03T13:15:33.618Z

// source not captured automatically - copy it from the editor and use Manual Push