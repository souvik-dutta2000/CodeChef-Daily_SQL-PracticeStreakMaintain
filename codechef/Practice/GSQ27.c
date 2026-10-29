// Problem: GSQ27
// Platform: codechef
// Language: Expected Output
┌──────────────┬────────────────┬────────┬────────┬─────────────┐
│ Passenger_id │ Passenger_name │ Gender │ Origin │ Destination │
├──────────────┼────────────────┼────────┼────────┼─────────────┤
│ 10002        │ Riya           │ Female │ Mumbai │ Delhi       │
└──────────────┴────────────────┴────────┴────────┴─────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS05/problems/GSQ27
// Solved on: 2026-10-29T14:50:06.092Z

/* Debug this query to meet the following conditons
- Passenger gender - Female AND
- Flight destination - Delhi
*/

select * from flights

-- %male% included both males and females
where gender = 'Female'

-- %i% returns all destinations which include 'i' like Delhi and Mumbai
and destination like 'Delhi';

-- '%' can be a replacement for 0 characters as well
-- '_' has to be a replacement for exactly 1 character.