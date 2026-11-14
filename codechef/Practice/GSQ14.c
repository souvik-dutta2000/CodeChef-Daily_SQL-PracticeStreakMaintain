// Problem: GSQ14
// Platform: codechef
// Language: ┌─────────────┬────────────────┬────────────┐
│ Employee_id │ Employee_Name  │ Department │
├─────────────┼────────────────┼────────────┤
│ 1           │ Kayla Thompson │ Sales      │
│ 2           │ Ethan Chen     │ Operations │
│ 3           │ Julia Lee      │ Client     │
│ 4           │ Marcus Garcia  │ Product    │
└─────────────┴────────────────┴────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS02/problems/GSQ14
// Solved on: 2026-11-14T09:19:19.499Z

/* Write a query which does the following
- Delete the row where the department is Client.
- Output the entire table.
*/
DELETE FROM employee
WHERE Department ='Client';   
select * from employee;