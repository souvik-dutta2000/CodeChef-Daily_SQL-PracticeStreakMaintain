// Problem: GSQ68E
// Platform: codechef
// Language: Expected output
┌─────────┬───────────┐
│ Item_id │ Item_Name │
├─────────┼───────────┤
│ 1       │ Apple     │
│ 2       │ Mango     │
│ 3       │ Potato    │
│ 4       │ Grapes    │
│ 5       │ Oranges   │
│ 6       │ Pineapple │
└─────────┴───────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS03/problems/GSQ68E?tab=statement
// Solved on: 2026-10-04T17:53:01.271Z

/* Write a query to output a table with the list of all items in the supermarket. There already exit a table 'Item' there is another table 'Item_adn' The task is to combine these two tables. */
select * from item union select *from Item_adn;