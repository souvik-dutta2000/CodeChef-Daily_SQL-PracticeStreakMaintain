// Problem: GSQ10
// Platform: codechef
// Language: ┌─────────────┬────────────────┬────────────┐
│ Employee_id │ Employee_Name  │ Department │
├─────────────┼────────────────┼────────────┤
│ 1           │ Kayla Thompson │ Sales      │
│ 2           │ Ethan Chen     │ Hr         │
│ 3           │ Julia Lee      │ Operations │
│ 4           │ Marcus Garcia  │ Hr         │
└─────────────┴────────────────┴────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS02/problems/GSQ10
// Solved on: 2026-10-29T14:42:22.399Z

/* Write a query which does the following
- Add a new column 'Hourly_Pay' to the table employee and set the value as 100 by default.
- Output the entire table
*/
ALTER table employee add column Hourly_Pay int default 100;
select * from employee;
