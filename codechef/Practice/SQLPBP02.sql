// Problem: SQLPBP02
// Platform: codechef
// Language: SQL​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP02
// Solved on: 2026-10-23T17:03:11.768Z

-- your code goes here
--select count(genre) as fiction_count from books 
  -- where count(genre) = 'Fiction';--
   SELECT COUNT(*) AS fiction_count 
FROM Books 
WHERE genre = 'Fiction';