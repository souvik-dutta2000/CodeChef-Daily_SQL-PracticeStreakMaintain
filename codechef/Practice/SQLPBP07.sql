// Problem: SQLPBP07
// Platform: codechef
// Language: SQL​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP07
// Solved on: 2026-09-24T17:31:23.389Z

-- your code goes here
select book_id,title,author,published_year from library where rating is null;