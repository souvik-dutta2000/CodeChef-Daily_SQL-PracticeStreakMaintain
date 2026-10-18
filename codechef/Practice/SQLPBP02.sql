// Problem: SQLPBP02
// Platform: codechef
// Language: SQL​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP02
// Solved on: 2026-10-18T18:49:26.423Z

-- your code goes here
--select count(genre) as fiction_count from books 
  -- where count(genre) = 'Fiction';--
   SELECT COUNT(*) AS fiction_count 
FROM Books 
WHERE genre = 'Fiction';