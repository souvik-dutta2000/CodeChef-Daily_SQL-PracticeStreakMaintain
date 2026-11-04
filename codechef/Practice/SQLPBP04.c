// Problem: SQLPBP04
// Platform: codechef
// Language: ┌─────────────┬───────┐
│ player_name │ score │
├─────────────┼───────┤
│ David       │ 1600  │
│ Bob         │ 1500  │
│ Charlie     │ 1300  │
└─────────────┴───────┘
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP04
// Solved on: 2026-11-04T19:16:26.699Z

SELECT DISTINCT player_name, score
FROM Players 
JOIN Matches ON player_name = winner
ORDER BY score DESC
LIMIT 3;