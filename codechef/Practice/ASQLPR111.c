// Problem: ASQLPR111
// Platform: codechef
// Language: -- Add a column called 'FeedbackScore' to the 'Treatments' Table
ALTER TABLE Treatments ADD COLUMN FeedbackScore INT CHECK (FeedbackScore BETWEEN 1 AND 5);

-- Update the Treatments Table by inserting the new records
UPDATE Treatments SET FeedbackScore = 5 WHERE TreatmentID = 1;
UPDATE Treatments SET FeedbackScore = 4 WHERE TreatmentID = 2;
UPDATE Treatments SET FeedbackScore = 3 WHERE TreatmentID = 3;

-- Fetch and display all the records from the 'Treatments' Table
SELECT * FROM Treatments;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/JJTST2/problems/ASQLPR111?tab=solution
// Solved on: 2026-10-09T19:02:57.278Z

-- Write all the queries here & SUBMIT them all at once.
-- Step 1: Write the query to alter the Treatments Table to include a column called 'FeedbackScore'


-- Step 2: Write the queries to update the Treatments Table by inserting the new FeedbackScore values


-- Step 3: Write the query to fetch and display all the records from the Treatments Table
-- Add a column called 'FeedbackScore' to the 'Treatments' Table
ALTER TABLE Treatments ADD COLUMN FeedbackScore INT CHECK (FeedbackScore BETWEEN 1 AND 5);

-- Update the Treatments Table by inserting the new records
UPDATE Treatments SET FeedbackScore = 5 WHERE TreatmentID = 1;
UPDATE Treatments SET FeedbackScore = 4 WHERE TreatmentID = 2;
UPDATE Treatments SET FeedbackScore = 3 WHERE TreatmentID = 3;

-- Fetch and display all the records from the 'Treatments' Table
SELECT * FROM Treatments;
