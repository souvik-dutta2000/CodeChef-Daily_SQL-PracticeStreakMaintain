// Problem: GSQ66
// Platform: codechef
// Language: SELECT *
 FROM Mfg_Ind
 UNION
 SELECT *
 FROM Mfg_Int;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS02/problems/GSQ66?tab=statement
// Solved on: 2026-10-03T13:10:00.038Z

/* Write a query using union to stack the table 'Arts' over 'Science' and output the final table */
SELECT * FROM Arts
UNION
SELECT * FROM Science ;