// Problem: GSQ56
// Platform: codechef
// Language: ┌────┬───────────────┬─────┬──────────────┬───────────────────────────┐
│ Id │     Name      │ Age │   Address    │           email           │
├────┼───────────────┼─────┼──────────────┼───────────────────────────┤
│ 1  │ John Smith    │ 25  │ 123 Main St  │ john@example.com          │
│ 2  │ Sarah Johnson │ 30  │ 456 Broadway │ sarah@example.com         │
│ 3  │ Michael Brown │ 45  │ 789 5th Ave  │ michael.brown@example.com │
│ 4  │ Jessica Davis │ 28  │ 321 Elm St   │ jessica.davis@example.com │
└────┴───────────────┴─────┴──────────────┴───────────────────────────┘
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS03/problems/GSQ56?tab=solution
// Solved on: 2026-10-14T18:59:18.150Z

/*Write a query which does the following
- Delete the entire row of the customer with customer id 1.
- Output the entire table once the above action is performed. */
DELETE FROM customer
WHERE Id = 1;

select  * from customer;