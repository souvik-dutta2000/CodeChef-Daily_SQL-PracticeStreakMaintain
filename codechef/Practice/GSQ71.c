// Problem: GSQ71
// Platform: codechef
// Language: Expected output
┌──────────────────┬────────┬──────────┐
│      f_name      │ f_cost │  f_type  │
├──────────────────┼────────┼──────────┤
│ Sushi            │ 20     │ Japanese │
│ Tandoori Chicken │ 15     │ Indian   │
│ Beef Stroganoff  │ 18     │ Russian  │
│ Paella           │ 25     │ Spanish  │
│ Moussaka         │ 16     │ Greek    │
└──────────────────┴────────┴──────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS04/problems/GSQ71?tab=statement
// Solved on: 2026-10-06T16:19:12.589Z

/*Write a query to find the dishes which cost more than the average cost of all the dishes at the restaurant. The output should have the columns f_name, f_cost, and f_type.*/
SELECT f_name, f_cost, f_type
FROM food
WHERE f_cost > (SELECT AVG(f_cost) FROM food);