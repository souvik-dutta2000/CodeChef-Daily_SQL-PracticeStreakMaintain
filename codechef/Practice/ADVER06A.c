// Problem: Converting an ER Diagram to Tables
// Platform: codechef
// Language: CREATE TABLE Patients (
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
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS03A/problems/ADVER06A?tab=solution
// Solved on: 2026-10-05T18:20:10.279Z

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