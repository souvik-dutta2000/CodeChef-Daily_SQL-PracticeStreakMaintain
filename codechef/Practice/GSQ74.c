// Problem: GSQ74
// Platform: codechef
// Language: Expected output
┌─────────────────┬────────┬─────────────┐
│     f_name      │ f_cost │   f_type    │
├─────────────────┼────────┼─────────────┤
│ Pizza           │ 10     │ Continental │
│ Fried Rice      │ 12     │ Chinese     │
│ Pad Thai        │ 14     │ Thai        │
│ Sushi           │ 20     │ Japanese    │
│ Beef Stroganoff │ 18     │ Russian     │
│ Paella          │ 25     │ Spanish     │
└─────────────────┴────────┴─────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS04/problems/GSQ74?tab=solution
// Solved on: 2026-10-06T16:20:44.990Z

/* Write a query to do the following. Try and use the concept of sub-queries.
- You need to output details of the dish - 'f_name', 'f_cost' and 'f_type' ONLY if the following condition is satisfied
- Average rating of the dish is greater than or equal to 4 */ 
SELECT f_name, f_cost, f_type
FROM food
WHERE f_id IN (
  SELECT f_id
  FROM ratings
  GROUP BY f_id
  HAVING AVG(f_rating) >= 4
);