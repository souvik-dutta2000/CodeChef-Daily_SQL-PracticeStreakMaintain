// Problem: GSQ62
// Platform: codechef
// Language: SQL​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS01/problems/GSQ62
// Solved on: 2026-10-20T13:16:23.914Z

/* Write a query to join the tables 'student' and 'course' and output the same. Check if you can find the course with id ENG201 in the output */
SELECT *
FROM student
JOIN course
ON student.Course_id = course.Course_id;