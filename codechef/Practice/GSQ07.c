// Problem: GSQ07
// Platform: codechef
// Language: ┌─────────────┬────────────────┬────────────┐
│ Employee_id │ Employee_Name  │ Department │
├─────────────┼────────────────┼────────────┤
│ 1           │ Kayla Thompson │ Sales      │
│ 2           │ Ethan Chen     │ Operations │
│ 3           │ Julia Lee      │ Hr         │
│ 4           │ Marcus Garcia  │ Product    │
│ 5           │ Samantha Park  │ Operations │
└─────────────┴────────────────┴────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS01/problems/GSQ07
// Solved on: 2026-11-12T12:19:46.520Z

/* Write a query to add the below mentioned employee details to the EMPLOYEE table.
Employee id: 06, Employee Name: Brandon Kim, Department: Operations
*/
insert into Employee(employee_id,employee_name,Department)
values(6,'Brandon Kim','Operations');