// Problem: GSQ61A
// Platform: codechef
// Language: SQL​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS01/problems/GSQ61A
// Solved on: 2026-10-20T18:33:28.157Z

/* Write a query to join the table 'student' and 'course' using 'Course_id' to match both the tables and output the joined table. */
select *
from student
inner join course
on student.course_id = course.course_id;