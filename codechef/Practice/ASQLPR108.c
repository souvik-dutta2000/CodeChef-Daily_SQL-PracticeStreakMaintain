// Problem: ASQLPR108
// Platform: codechef
// Language: SELECT PatientID, Name, 
       (SELECT MAX(AppointmentDate) FROM Appointments a WHERE a.PatientID = p.PatientID) AS LatestAppointment 
FROM Patients p;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/JJTST2/problems/ASQLPR108?tab=solution
// Solved on: 2026-10-09T19:00:16.485Z

-- Write the query to get the latest appointment date for each patient. 
-- (Use the concept of Subqueries & Set Operations)

-- The output should contain the following fields: 
-- |PatientID | Name | LatestAppointment
SELECT PatientID, Name, 
       (SELECT MAX(AppointmentDate) FROM Appointments a WHERE a.PatientID = p.PatientID) AS LatestAppointment 
FROM Patients p;
