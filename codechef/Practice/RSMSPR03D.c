// Problem: RSMSPR03D
// Platform: codechef
// Language: ┌─────────────┬─────────────┬─────────────────────┬────────────┬──────────────┐
│ customer_id │    name     │        email        │   phone    │   address    │
├─────────────┼─────────────┼─────────────────────┼────────────┼──────────────┤
│ 5           │ Charlie Lee │ charlie.l@email.com │ 9234567890 │ Not Provided │
│ 7           │ Emily Clark │ emily.c@email.com   │ 9345678901 │ Not Provided │
└─────────────┴─────────────┴─────────────────────┴────────────┴──────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR03D?tab=solution
// Solved on: 2026-10-27T20:15:20.102Z

/* Update your query here*/
SELECT * FROM Customers WHERE address = 'Not Provided';