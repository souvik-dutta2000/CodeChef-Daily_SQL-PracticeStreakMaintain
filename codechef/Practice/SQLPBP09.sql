// Problem: SQLPBP09
// Platform: codechef
// Language: SQL​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP09
// Solved on: 2026-11-04T19:16:05.099Z

-- your code goes here
select department,count(employee_name) as total_employees from employees group by department ;
