// Problem: ASQLPR109
// Platform: codechef
// Language: SELECT t.PatientID, p.Name, d.Specialization 
FROM Treatments t
JOIN Patients p ON t.PatientID = p.PatientID
JOIN Doctors d ON t.DoctorID = d.DoctorID
WHERE t.PatientID IN (
    SELECT PatientID
    FROM Treatments t2
    JOIN Doctors d2 ON t2.DoctorID = d2.DoctorID
    GROUP BY t2.PatientID
    HAVING COUNT(DISTINCT d2.Specialization) > 1
)
ORDER BY t.PatientID, d.Specialization;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/JJTST2/problems/ASQLPR109?tab=solution
// Solved on: 2026-10-09T19:01:02.329Z

SELECT t.PatientID, p.Name, d.Specialization 
FROM Treatments t
JOIN Patients p ON t.PatientID = p.PatientID
JOIN Doctors d ON t.DoctorID = d.DoctorID
WHERE t.PatientID IN (
    SELECT PatientID
    FROM Treatments t2
    JOIN Doctors d2 ON t2.DoctorID = d2.DoctorID
    GROUP BY t2.PatientID
    HAVING COUNT(DISTINCT d2.Specialization) > 1
)
ORDER BY t.PatientID, d.Specialization;