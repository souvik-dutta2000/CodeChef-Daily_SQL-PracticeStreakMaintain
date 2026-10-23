// Problem: SQLP046
// Platform: codechef
// Language: SELECT c.name, COUNT(*) AS booking_count FROM customers c  JOIN bookings b ON c.customer_id = b.customer_id GROUP BY c.customer_id ORDER BY booking_count DESC LIMIT 1;
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sql-case-study/SQLCS03/problems/SQLP046
// Solved on: 2026-10-23T21:26:09.909Z

// source not captured automatically - copy it from the editor and use Manual Push