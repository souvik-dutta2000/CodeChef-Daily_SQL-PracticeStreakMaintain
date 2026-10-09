// Problem: ASQLPR112
// Platform: codechef
// Language: SELECT d.DoctorID, d.Name, 
       RANK() OVER (ORDER BY AVG(t.FeedbackScore) DESC) AS Rank
FROM Doctors d
LEFT JOIN Treatments t ON d.DoctorID = t.DoctorID
GROUP BY d.DoctorID, d.Name;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/JJTST2/problems/ASQLPR112?tab=solution
// Solved on: 2026-10-09T19:03:57.276Z

-- Write the query to rank doctors based on patient feedback
-- (Use the concept of Aggregations & Analytical Functions)

-- The output should contain the following fields: 
-- | DoctorID  | Name | Rank
SELECT d.DoctorID, d.Name, 
       RANK() OVER (ORDER BY AVG(t.FeedbackScore) DESC) AS Rank
FROM Doctors d
LEFT JOIN Treatments t ON d.DoctorID = t.DoctorID
GROUP BY d.DoctorID, d.Name;