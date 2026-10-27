// Problem: RSMSPR05A
// Platform: codechef
// Language: ┌────────────┬─────────────────────┬────────────────┐
│ product_id │        name         │ stock_quantity │
├────────────┼─────────────────────┼────────────────┤
│ 102        │ Samsung Galaxy S23  │ 15             │
│ 103        │ Leather Jacket      │ 25             │
│ 104        │ HP Laptop           │ 8              │
│ 105        │ Wooden Dining Table │ 5              │
│ 106        │ Nike Running Shoes  │ 20             │
│ 107        │ LED TV 55"          │ 12             │
│ 108        │ Rice 10kg           │ 50             │
│ 109        │ Sofa Set (3+1+1)    │ 4              │
│ 110        │ Organic Honey 500ml │ 30             │
└────────────┴─────────────────────┴────────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR05A?tab=Help
// Solved on: 2026-10-27T20:21:45.375Z

BEGIN TRANSACTION;
SAVEPOINT S1;

-- Remove products that are out of stock and retrieve the remaining products
DELETE FROM Products
WHERE stock_quantity = 0;

SELECT product_id, name, stock_quantity FROM Products;