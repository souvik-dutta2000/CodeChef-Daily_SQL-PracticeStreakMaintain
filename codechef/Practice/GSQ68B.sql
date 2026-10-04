// Problem: GSQ68B
// Platform: codechef
// Language: SQL​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS03/problems/GSQ68B
// Solved on: 2026-10-04T17:47:55.162Z

/* Write a query to join the table 'Customer' and 'Purchase' using Customer_id as the common column in the table.
Output the joined table including the list of customers who hasn't made any purchases yet. */
 select * from customer c left join Purchase p on c.Customer_id = p.Customer_id;