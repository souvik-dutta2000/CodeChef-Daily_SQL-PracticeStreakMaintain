// Problem: ASQLPR104
// Platform: codechef
// Language: SELECT a.AppointmentID, p.Name AS Patient, d.Name AS Doctor, a.AppointmentDate
FROM Appointments a
INNER JOIN Patients p ON a.PatientID = p.PatientID
INNER JOIN Doctors d ON a.DoctorID = d.DoctorID
WHERE a.Status = 'Scheduled';
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/JJTST2/problems/ASQLPR104?tab=solution
// Solved on: 2026-10-09T18:54:53.865Z

-- Write the query to fetch all Scheduled Consultations (Use the concept of JOINs)

-- The output should contain the following fields: 
-- | AppointmentID | Patient | Doctor | AppointmentDate |
SELECT a.AppointmentID, p.Name AS Patient, d.Name AS Doctor, a.AppointmentDate
FROM Appointments a
INNER JOIN Patients p ON a.PatientID = p.PatientID
INNER JOIN Doctors d ON a.DoctorID = d.DoctorID
WHERE a.Status = 'Scheduled';