// Problem: GSQ65
// Platform: codechef
// Language: SELECT *
 FROM Manufacture
 CROSS JOIN Model
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS01/problems/GSQ65
// Solved on: 2026-10-18T18:08:45.515Z

/* Write a query cross join the table 'student' and 'course' and check out all possible courses a student can opt. Output the table after cross join */
SELECT St_Name,Course_Name
 FROM student
 CROSS JOIN course;