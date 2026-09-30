// Problem: GSQ62
// Platform: codechef
// Language: SELECT *
FROM student
LEFT JOIN course
ON student.Course_id = course.Course_id;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS01/problems/GSQ62?tab=Help
// Solved on: 2026-09-30T15:30:18.600Z

/* Write a query to join the tables 'student' and 'course' and output the same. Check if you can find the course with id ENG201 in the output */
SELECT *
FROM student
JOIN course
ON student.Course_id = course.Course_id;