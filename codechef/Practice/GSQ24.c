// Problem: GSQ24
// Platform: codechef
// Language: select * from Flights
where origin = 'Mumbai'
or origin = 'New York';
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS05/problems/GSQ24
// Solved on: 2026-11-14T20:54:15.418Z

/*write a query that returns the rows which meet the following conditions
- Either Origin is Mumbai or the Destination is Mumbai */
select * from Flights
where origin = 'Mumbai'
or destination = 'Mumbai';