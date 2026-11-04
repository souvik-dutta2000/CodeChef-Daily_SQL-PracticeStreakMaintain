// Problem: SQLPBP08
// Platform: codechef
// Language: SQL​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP08
// Solved on: 2026-11-04T19:15:50.707Z

--your code goes here
select employee_name,company,salary from employees where category ='Full-Time'order by salary desc;