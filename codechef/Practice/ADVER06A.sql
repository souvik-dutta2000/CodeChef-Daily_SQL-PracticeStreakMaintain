// Problem: Converting an ER Diagram to Tables
// Platform: codechef
// Language: SQL​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS03A/problems/ADVER06A
// Solved on: 2026-10-23T17:01:02.834Z

CREATE TABLE Patients (
    SS VARCHAR(20) PRIMARY KEY,
    Name VARCHAR(100),
    Insurance VARCHAR(100),
    DateAdmitted DATE,
    DateCheckedOut DATE
);

CREATE TABLE Doctors (
    DSS VARCHAR(20) PRIMARY KEY,
    Name VARCHAR(100),
    Specialization VARCHAR(50)
);

CREATE TABLE Tests (
    TestID INT PRIMARY KEY,
    TestName VARCHAR(100),
    Date DATE,
    Time TIME,
    Result VARCHAR(255)
);

CREATE TABLE TestLog (
    SS VARCHAR(20),
    TestID INT,
    PRIMARY KEY (SS, TestID),
    FOREIGN KEY (SS) REFERENCES Patients(SS),
    FOREIGN KEY (TestID) REFERENCES Tests(TestID)
);

CREATE TABLE DrPatient (
    DSS VARCHAR(20),
    SS VARCHAR(20),
    PRIMARY KEY (DSS, SS),
    FOREIGN KEY (DSS) REFERENCES Doctors(DSS),
    FOREIGN KEY (SS) REFERENCES Patients(SS)
);