// Problem: GSQ61A
// Platform: codechef
// Language: select *
from student
inner join course
on student.course_id = course.course_id;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS01/problems/GSQ61A?tab=Help
// Solved on: 2026-09-30T15:25:53.506Z

/* Write a query to join the table 'student' and 'course' using 'Course_id' to match both the tables and output the joined table. */
select *
from student
inner join course
on student.course_id = course.course_id;