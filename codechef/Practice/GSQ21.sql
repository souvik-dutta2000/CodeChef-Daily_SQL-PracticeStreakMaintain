// Problem: GSQ21
// Platform: codechef
// Language: SQL​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS04/problems/GSQ21
// Solved on: 2026-10-29T14:48:48.717Z

/* Debug this query to get the correct output */

select distinct passenger_name
from flights
where gender = 'Male'
and origin = 'Mumbai';