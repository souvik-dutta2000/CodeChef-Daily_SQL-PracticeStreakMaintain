// Problem: GSQ68F
// Platform: codechef
// Language: Expected output
┌─────────────┬───────────────┬─────────────┬─────────────┬──────────────┐
│ Customer_id │ Customer_Name │ Purchase_id │ Customer_id │ Purchase_Amt │
├─────────────┼───────────────┼─────────────┼─────────────┼──────────────┤
│ 5           │ Michael Kim   │ 175         │ 5           │ 300          │
│ 2           │ Mary Johnson  │ 142         │ 2           │ 200          │
│ 1           │ John Smith    │ 121         │ 1           │ 100          │
└─────────────┴───────────────┴─────────────┴─────────────┴──────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS03/problems/GSQ68F?tab=solution
// Solved on: 2026-10-04T17:54:16.906Z

/* Write a query to output a join table of 'Customer' and 'Purchase' containing only the details of 3 customers who has the highest purchased amount. */
With top_purchase AS(  
 SELECT Purchase_id,Customer_id,Purchase_Amt
 FROM Purchase
 ORDER BY Purchase_Amt DESC
 LIMIT 3
  )
   
 SELECT *
 FROM Customer
 JOIN top_purchase
 ON Customer.Customer_id = top_purchase.Customer_id;