// Problem: GSQ23
// Platform: codechef
// Language: select * from Flights
where origin = 'Mumbai'
and passenger_id BETWEEN 10001 AND 10007;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS05/problems/GSQ23?tab=solution
// Solved on: 2026-10-27T00:57:36.040Z

/* write a query below that returns the rows which meet the following conditions
- Gender - Female
- Destination - Cairo */

select * from Flights
where destination = 'Cairo'
and gender =  'Female';