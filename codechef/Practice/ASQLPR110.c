// Problem: ASQLPR110
// Platform: codechef
// Language: SELECT Diagnosis, COUNT(*) AS PatientCount
FROM Treatments
GROUP BY Diagnosis;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/JJTST2/problems/ASQLPR110?tab=solution
// Solved on: 2026-10-09T19:02:08.080Z

-- Write the query to count the patients with specific conditions.
-- (Use the concept of Aggregations & Analytical Functions)

-- The output should contain the following fields: 
-- |Diagnosis  | PatientCount
SELECT Diagnosis, COUNT(*) AS PatientCount
FROM Treatments
GROUP BY Diagnosis;