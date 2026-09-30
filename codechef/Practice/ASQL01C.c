// Problem: ASQL01C
// Platform: codechef
// Language: SELECT
    e1.employee_name AS Employee,
    e2.employee_name AS Manager
FROM
    employees AS e1  -- Alias for employee
INNER JOIN
    employees AS e2  -- Alias for manager
ON
    e1.manager_id = e2.employee_id;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS01/problems/ASQL01C?tab=Help
// Solved on: 2026-09-30T15:37:13.953Z

-- We have a student table that also stores the Course_id of a student's favorite course. Our task has two parts related to using a SELF JOIN:

--     Find pairs of students that belong to the same department.
--     Identify students who have chosen the same Course_id as their favorite. Display the St_id, St_Name, and Course_id and order it in increasing Course_id.
-- Standard JOIN
-- Part 1: Find pairs of students that belong to the same department
SELECT 
    s1.St_id,
    s1.St_Name,
    s1.Department,
    s2.St_id,
    s2.St_Name,
    s2.Department
FROM student AS s1
INNER JOIN student AS s2
ON s1.Department = s2.Department
AND s1.St_id != s2.St_id;

-- Part 2: Identify students who have chosen the same Course_id as their favorite
SELECT DISTINCT
    s1.St_id,
    s1.St_Name,
    s1.Course_id
FROM student AS s1
INNER JOIN student AS s2
ON s1.Course_id = s2.Course_id
AND s1.St_id != s2.St_id
ORDER BY s1.Course_id;