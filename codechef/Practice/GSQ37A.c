// Problem: GSQ37A
// Platform: codechef
// Language: SELECT employee_id AS 'Serial'
FROM employee;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS08/problems/GSQ37A?tab=solution
// Solved on: 2026-10-27T01:02:54.261Z

/* Write a query to output all from the following columns in the table 'employee'
- Rename employee_id as 'Serial'
- Rename employee_name as 'Name'
- Rename department as 'Dept' */

SELECT employee_id as 'Serial',
    employee_name as 'Name',
    department as 'Dept'
from employee;