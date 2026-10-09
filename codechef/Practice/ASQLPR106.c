// Problem: ASQLPR106
// Platform: codechef
// Language: SELECT d.Name 
FROM Doctors d
RIGHT JOIN Appointments a ON d.DoctorID = a.DoctorID
WHERE a.Status = 'Scheduled' AND d.Specialization = 'Cardiology';
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/JJTST2/problems/ASQLPR106?tab=solution
// Solved on: 2026-10-09T18:57:54.875Z

-- Write the query to Get all Doctors from Cardiology Specialization With Scheduled Appointments 
-- (Use the concept of JOINs)

-- The output should contain the following fields: 
-- | Name |
SELECT d.Name 
FROM Doctors d
RIGHT JOIN Appointments a ON d.DoctorID = a.DoctorID
WHERE a.Status = 'Scheduled' AND d.Specialization = 'Cardiology';