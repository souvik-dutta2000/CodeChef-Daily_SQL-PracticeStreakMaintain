// Problem: RSMSPR03D
// Platform: codechef
// Language: ┌─────────────┬─────────────┬─────────────────────┬────────────┬──────────────┐
│ customer_id │    name     │        email        │   phone    │   address    │
├─────────────┼─────────────┼─────────────────────┼────────────┼──────────────┤
│ 5           │ Charlie Lee │ charlie.l@email.com │ 9234567890 │ Not Provided │
│ 7           │ Emily Clark │ emily.c@email.com   │ 9345678901 │ Not Provided │
└─────────────┴─────────────┴─────────────────────┴────────────┴──────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/BEGSQLPR/problems/RSMSPR03D
// Solved on: 2026-11-03T19:42:10.581Z

/* Update your query here*/
SELECT * FROM Customers WHERE address = 'Not Provided';