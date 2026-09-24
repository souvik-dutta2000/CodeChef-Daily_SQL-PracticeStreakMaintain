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
// URL: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP04?tab=Help
// Solved on: 2026-09-24T17:46:32.941Z

SELECT DISTINCT player_name, score
FROM Players 
JOIN Matches ON player_name = winner
ORDER BY score DESC
LIMIT 3;