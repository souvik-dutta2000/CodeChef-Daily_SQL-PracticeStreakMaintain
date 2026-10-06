// Problem: GSQ76
// Platform: codechef
// Language: SELECT * FROM table_1
     INTERSECT
     SELECT * FROM table_2;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS06/problems/GSQ76?tab=solution
// Solved on: 2026-10-06T16:37:20.149Z

/* Write a query to find the list of fruits available in the supermarket.
(f_name column has the name of the fruits and inv_name has the name of inventories, you are suppose to output the name of the fruits.)*/
  SELECT f_name FROM fruit
  INTERSECT
  SELECT  inv_name FROM inventory;