// Problem: GSQ15
// Platform: codechef
// Language: SQL​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS02/problems/GSQ15
// Solved on: 2026-10-29T14:45:16.410Z

/* Debug this query to run the problem successfully. 
- Don’t worry about the actual values as long as you get the query to run. */

INSERT INTO employee (Id,Name,Age,Address)

/* Code had the following 2 errors
- Column 1 was the primary key - hence it must be unique
- Column 4 has constraints of 'unique' varchar - hence no entries can be duplicate*/
VALUES  (1, 'John Smith', 25,  '123 Main St'),
        (2, 'Sarah Johnson', 30,'456 Broadway'),
        (3, 'Michael Brown', 45,  '123 BroadwaySt'),
        (4, 'Jessica Davis', 28,  '321 Elm St');