// Problem: ASQL01B
// Platform: codechef
// Language: SELECT *
FROM table1
FULL OUTER JOIN table2
ON table1.column = table2.column;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS01/problems/ASQL01B
// Solved on: 2026-09-30T15:35:49.892Z

-- Write a query to do the following:

-- FULL OUTER JOIN the 'student' and 'course' tables using 'Course_id' to match the tables. Output the joined table.
-- Standard JOIN
SELECT *
FROM student
FULL outer join course
ON student.Course_id = course.Course_id;

