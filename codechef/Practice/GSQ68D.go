// Problem: GSQ68D
// Platform: codechef
// Language: Expected output
┌───────────────┬───────────┐
│ Customer_Name │ Item_Name │
├───────────────┼───────────┤
│ John          │ Apple     │
│ John          │ Mango     │
│ John          │ Potato    │
│ Sara          │ Apple     │
│ Sara          │ Mango     │
│ Sara          │ Potato    │
│ Adam          │ Apple     │
│ Adam          │ Mango     │
│ Adam          │ Potato    │
│ Emily         │ Apple     │
│ Emily         │ Mango     │
│ Emily         │ Potato    │
│ Tom           │ Apple     │
│ Tom           │ Mango     │
│ Tom           │ Potato    │
└───────────────┴───────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS03/problems/GSQ68D?tab=statement
// Solved on: 2026-10-04T17:50:38.473Z

/* Write a query to output a table with the list of possible item all the customers could be buy. The output table should contain the columns 'Customer_Name' and 'Item_Name'. */
select Customer_Name , Item_Name from customer cross join item;