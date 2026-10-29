// Problem: GSQ17
// Platform: codechef
// Language: select column_1, column_2
    from Flights;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS04/problems/GSQ17
// Solved on: 2026-10-29T14:47:33.107Z

/* Write a query which does the following
- Fetch the entry specifically from 2 columns - 'Passenger_name' and 'Gender' */
select passenger_name, gender
from flights;