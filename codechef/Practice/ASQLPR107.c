// Problem: ASQLPR107
// Platform: codechef
// Language: SELECT PatientID, Name 
FROM Patients 
WHERE PatientID IN (SELECT PatientID FROM Billing WHERE Status='Unpaid');
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/JJTST2/problems/ASQLPR107?tab=solution
// Solved on: 2026-10-09T18:59:23.678Z

-- Write the query to get the list of all patients who have not paid the bill. 
-- (Use the concept of Subqueries & Set Operations)

-- The output should contain the following fields: 
-- |PatientID | Name |

SELECT PatientID, Name 
FROM Patients 
WHERE PatientID IN (SELECT PatientID FROM Billing WHERE Status='Unpaid');