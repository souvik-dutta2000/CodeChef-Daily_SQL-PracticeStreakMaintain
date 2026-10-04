// Problem: GSQ68A
// Platform: codechef
// Language: SQL​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS03/problems/GSQ68A
// Solved on: 2026-10-04T17:45:31.165Z

/* Write a query to join the table 'Customer' and 'Purchase' using Customer_id as the common column in the table.
Output the joined table. */
select * from Customer c inner join Purchase p on c.Customer_id = p.Customer_id;