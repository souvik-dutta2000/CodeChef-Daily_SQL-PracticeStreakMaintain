// Problem: GSQ25
// Platform: codechef
// Language: select * from Flights
where origin like '%York%';

┌──────────────┬────────────────┬────────┬──────────┬─────────────┐
│ Passenger_id │ Passenger_name │ Gender │  Origin  │ Destination │
├──────────────┼────────────────┼────────┼──────────┼─────────────┤
│ 10006        │ Dia            │ Female │ New York │ Cairo       │
│ 10007        │ Jackson        │ Male   │ New York │ London      │
└──────────────┴────────────────┴────────┴──────────┴─────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS05/problems/GSQ25
// Solved on: 2026-10-29T14:49:40.892Z

/* Write a query that returns the rows which meet the following conditions
- Passenger names that end with 'a' */
select * from Flights
where passenger_name like '%a';