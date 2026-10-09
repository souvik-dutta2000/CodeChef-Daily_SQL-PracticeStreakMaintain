// Problem: ASQLPR105
// Platform: codechef
// Language: SELECT p.Name, a.AppointmentID, a.Status
FROM Patients p
LEFT JOIN Appointments a ON p.PatientID = a.PatientID;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/JJTST2/problems/ASQLPR105?tab=solution
// Solved on: 2026-10-09T18:56:03.272Z

-- Write the query to Get All Patients Including Those Without Appointments (Use the concept of JOINs)

-- The output should contain the following fields: 
-- | Name | AppointmentID | Status |
SELECT p.Name, a.AppointmentID, a.Status
FROM Patients p
LEFT JOIN Appointments a ON p.PatientID = a.PatientID;