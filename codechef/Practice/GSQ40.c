// Problem: GSQ40
// Platform: codechef
// Language: ┌─────────────┬────────────────┬────────────┬────────────┐
│ Employee_id │ Employee_Name  │ Department │ Hourly_Pay │
├─────────────┼────────────────┼────────────┼────────────┤
│ 1           │ Kayla Thompson │ Sales      │ 44         │
│ 2           │ Ethan Chen     │ Operations │ 26         │
│ 3           │ Julia Lee      │ Hr         │ 66         │
│ 4           │ Marcus Garcia  │ Product    │ 34         │
│ 5           │ Samantha Park  │ Operations │ 43         │
│ 6           │ Brandon Kim    │ Operations │ 28         │
│ 7           │ Olivia Nguyen  │ Sales      │ 30         │
│ 8           │ Dylan Patel    │ Operations │ 35         │
│ 9           │ Chloe Davis    │ Hr         │ 31         │
│ 10          │ Brandon Adams  │ Product    │ 43         │
└─────────────┴────────────────┴────────────┴────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS08/problems/GSQ40?tab=solution
// Solved on: 2026-10-27T01:05:18.203Z

/*Write 3 separate queries to output the entries for the following
- Count the number of employees in the department 'Sales'.
- Maximum Hourly pay for the department 'Operations'.
- Minimum Hourly pay for the department 'Operations'.

Output the counts on separate lines */

SELECT count(*) as 'count_sales'
FROM employee
where Department='Sales';

SELECT MAX(Hourly_Pay) as 'ops_max_pay'
FROM employee
where Department='Operations';

SELECT MIN(Hourly_Pay) as 'ops_min_pay'
FROM employee
where Department='Operations';
