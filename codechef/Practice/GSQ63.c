// Problem: GSQ63
// Platform: codechef
// Language: SELECT *
     FROM customer
     LEFT JOIN order
     ON customer.cust_id = order.cust_id;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS01/problems/GSQ63?tab=Help
// Solved on: 2026-09-30T15:32:03.180Z

/* Write a query to do the following:
 - JOIN the tables 'student' and 'course' using 'Course_id' to match both the tables and output the joined table.
 - LEFT JOIN the tables 'student' and 'course' using 'Course_id' to match both the tables and output the joined table. */
 -- Standard JOIN
SELECT *
FROM student
JOIN course
ON student.Course_id = course.Course_id;

-- LEFT JOIN (keeping all students from the 'student' table)
SELECT *
FROM student
LEFT JOIN course
ON student.Course_id = course.Course_id;