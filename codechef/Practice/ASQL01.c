// Problem: ASQL01
// Platform: codechef
// Language: SELECT *
FROM customer
RIGHT JOIN order
ON customer.cust_id = order.cust_id;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS01/problems/ASQL01?tab=Help
// Solved on: 2026-09-30T15:34:06.746Z

/* Write the queries to do the following:
 - JOIN the tables 'student' and 'course' using 'Course_id' to match both the tables and output the joined table.
 - RIGHT JOIN the tables 'student' and 'course' using 'Course_id' to match both the tables and output the joined table. */
 -- Standard JOIN
SELECT *
FROM student
JOIN Course
ON student.Course_id = course.Course_id;

-- LEFT JOIN (keeping all students from the 'student' table)
SELECT *
FROM student
RIGHT JOIN Course
ON student.Course_id = course.Course_id;