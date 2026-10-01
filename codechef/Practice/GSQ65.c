// Problem: GSQ65
// Platform: codechef
// Language: SELECT *
 FROM Manufacture
 CROSS JOIN Model
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS01/problems/GSQ65?tab=Help
// Solved on: 2026-10-01T13:37:38.593Z

/* Write a query cross join the table 'student' and 'course' and check out all possible courses a student can opt. Output the table after cross join */
SELECT St_Name,Course_Name
 FROM student
 CROSS JOIN course;