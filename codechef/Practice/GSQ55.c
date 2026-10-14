// Problem: GSQ55
// Platform: codechef
// Language: ┌────┬───────────────┬─────┬──────────────┬───────────────────────────┐
│ Id │     Name      │ Age │   Address    │           email           │
├────┼───────────────┼─────┼──────────────┼───────────────────────────┤
│ 1  │ John Smith    │ 25  │ 123 Main St  │ john@example.com          │
│ 2  │ Sarah Johnson │ 30  │ 456 Broadway │ sarah@example.com         │
│ 3  │ Michael Brown │ 45  │ 789 5th Ave  │ michael.brown@example.com │
│ 4  │ Jessica Davis │ 28  │ 321 Elm St   │ jessica.davis@example.com │
│ 5  │ David Lee     │ 35  │ 555 Park Ave │ David@example.com         │
└────┴───────────────┴─────┴──────────────┴───────────────────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS03/problems/GSQ55?tab=solution
// Solved on: 2026-10-14T18:57:48.156Z

/* Write a query which does the following
- Update the age to 52 for the customer with customer id 3.
- Output all the entires of the table. */
UPDATE customer
SET Age = 52
WHERE Id = 3;

select  * from customer;