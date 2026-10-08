// Problem: GSQ81
// Platform: codechef
// Language: SELECT
      CASE
        WHEN pay < 20000 THEN 'Level 1'
        WHEN pay BETWEEN 20001 AND 40000 THEN 'Level 2'
        WHEN pay >= 40000 THEN 'Level 3'
        ELSE 'NA'             -- If the above 3 conditions are not met, the row entry will be NA
      END AS Pay_category,    -- Renaming the column as Pay_category
      COUNT(*) as emp_count
      FROM employee
      GROUP BY 1;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS08/problems/GSQ81?tab=solution
// Solved on: 2026-10-08T04:38:26.449Z

/* Write a query to categorize the students based on the marks into grades and output the count of students in each grade. Give the Alias name for the CASE as 'Grades"
- Marks Less than 50 - C,
- Marks between 50 and 80 - B,
- Marks more than 80 - A */
 SELECT
      CASE
        WHEN marks < 50 THEN 'C'
        WHEN marks BETWEEN 50 AND 80 THEN 'B'
        WHEN marks > 80 THEN 'A'
        ELSE 'NA'
      END AS Grades,
      COUNT(*) AS Student_count
      FROM marks
      GROUP BY 1;