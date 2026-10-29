// Problem: GSQ20
// Platform: codechef
// Language: Expected Output
┌────────────────┬────────┐
│ Passenger_name │ Gender │
├────────────────┼────────┤
│ Dia            │ Female │
│ Jackson        │ Male   │
└────────────────┴────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS04/problems/GSQ20
// Solved on: 2026-10-29T14:48:30.715Z

/* Write a query that does the following
- Where the origin of the flight is 'New York'
- Output the passenger_name and gender */
select passenger_name, gender
from flights
where origin = 'New York';