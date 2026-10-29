// Problem: GSQ26
// Platform: codechef
// Language: Expected Output
Flights
┌──────────────┬────────────────┬────────┬────────┬─────────────┐
│ Passenger_id │ Passenger_name │ Gender │ Origin │ Destination │
├──────────────┼────────────────┼────────┼────────┼─────────────┤
│ 10004        │ Anthony        │ Male   │ Mumbai │ Cairo       │
└──────────────┴────────────────┴────────┴────────┴─────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS05/problems/GSQ26
// Solved on: 2026-10-29T14:49:55.297Z

/* write a query with the following conditions
- Destination city end in 'o' AND
- Origin city starts with 'M' 
*/
select * from flights
where destination like '%o'
and origin like 'M%';