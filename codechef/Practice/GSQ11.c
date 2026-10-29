// Problem: GSQ11
// Platform: codechef
// Language: ┌─────────────┬────────────────┬────────────┬────────────┐
│ Employee_id │ Employee_Name  │ Department │ Hourly_Pay │
├─────────────┼────────────────┼────────────┼────────────┤
│ 1           │ Kayla Thompson │ Sales      │ 100        │
│ 2           │ Ethan Chen     │ Hr         │ 100        │
│ 3           │ Julia Lee      │ Operations │ 100        │
│ 4           │ Marcus Garcia  │ Hr         │ 100        │
└─────────────┴────────────────┴────────────┴────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS02/problems/GSQ11
// Solved on: 2026-10-29T14:43:06.807Z

/* Write a query to do the following
- Set hourly_pay to 150 for HR employees
- Output the entire table
*/ 
UPDATE EMPLOYEE SET hourly_pay = 150 
WHERE department = 'Hr' ;
select * from employee;