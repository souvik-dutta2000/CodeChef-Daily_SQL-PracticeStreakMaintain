// Problem: GSQ77
// Platform: codechef
// Language: SELECT * FROM table_1
     EXCEPT
     SELECT * FROM table_2;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS06/problems/GSQ77
// Solved on: 2026-10-14T17:56:15.034Z

/* Write a query to output the name of the fruits (f_name) from the table 'fruit' which are not present in the table  inventory(f_name column has the name of the fruits and inv_name has the name of the items in inventory). */
SELECT f_name FROM fruit
 EXCEPT
 SELECT inv_name FROM inventory;