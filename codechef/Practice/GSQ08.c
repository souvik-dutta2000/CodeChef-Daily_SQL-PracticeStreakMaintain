// Problem: GSQ08
// Platform: codechef
// Language: ALTER TABLE student
    ADD COLUMN Department TEXT default NULL;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS02/problems/GSQ08?tab=solution
// Solved on: 2026-10-13T18:05:29.217Z

/* Write a query to add a column 'Designation' to the table and set 'Null' as the default value. Output the entire table.*/

ALTER TABLE employee
/* Null values is set as default for newly added column */
ADD COLUMN Designation TEXT default NULL;

select * from employee;