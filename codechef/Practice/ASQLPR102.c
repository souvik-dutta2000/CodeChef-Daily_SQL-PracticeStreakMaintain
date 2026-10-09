// Problem: ASQLPR102
// Platform: codechef
// Language: -- Creating Doctors Table
CREATE TABLE Doctors (
    DoctorID INT PRIMARY KEY,
    Name VARCHAR(100) NOT NULL,
    Specialization VARCHAR(100),
    ContactNumber VARCHAR(15),
    Email VARCHAR(100) NOT NULL
);

-- Creating Patients Table
CREATE TABLE Patients (
    PatientID INT PRIMARY KEY,
    Name VARCHAR(100) NOT NULL,
    DOB DATE,
    Gender TEXT CHECK (Gender IN ('Male', 'Female', 'Other')),
    ContactNumber VARCHAR(15),
    Address TEXT
);

-- Creating Appointments Table
CREATE TABLE Appointments (
    AppointmentID INT PRIMARY KEY,
    PatientID INT,
    DoctorID INT,
    AppointmentDate DATE,
    Status TEXT CHECK (Status IN ('Scheduled', 'Completed', 'Cancelled')),
    FOREIGN KEY (PatientID) REFERENCES Patients(PatientID) ON DELETE CASCADE,
    FOREIGN KEY (DoctorID) REFERENCES Doctors(DoctorID) ON DELETE SET NULL
);

-- Creating Treatments Table
CREATE TABLE Treatments (
    TreatmentID INT PRIMARY KEY,
    PatientID INT,
    DoctorID INT,
    Diagnosis VARCHAR(255),
    TreatmentDescription TEXT,
    TreatmentDate DATE,
    FOREIGN KEY (PatientID) REFERENCES Patients(PatientID) ON DELETE CASCADE,
    FOREIGN KEY (DoctorID) REFERENCES Doctors(DoctorID) ON DELETE SET NULL
);

-- Creating MedicalRecords Table
CREATE TABLE MedicalRecords (
    RecordID INT PRIMARY KEY,
    PatientID INT,
    TreatmentID INT,
    Notes TEXT,
    RecordDate DATE,
    FOREIGN KEY (PatientID) REFERENCES Patients(PatientID) ON DELETE CASCADE,
    FOREIGN KEY (TreatmentID) REFERENCES Treatments(TreatmentID) ON DELETE CASCADE
);

-- Creating Billing Table
CREATE TABLE Billing (
    BillID INT PRIMARY KEY,
    PatientID INT,
    TreatmentID INT,
    Amount REAL,
    BillDate DATE,
    Status TEXT CHECK (Status IN ('Paid', 'Unpaid')),
    FOREIGN KEY (PatientID) REFERENCES Patients(PatientID) ON DELETE CASCADE,
    FOREIGN KEY (TreatmentID) REFERENCES Treatments(TreatmentID) ON DELETE CASCADE
);
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql-intermediate/JJTST2/problems/ASQLPR102?tab=solution
// Solved on: 2026-10-09T17:55:20.980Z

-- Creating Doctors Table
CREATE TABLE Doctors (
    DoctorID INT PRIMARY KEY,
    Name VARCHAR(100) NOT NULL,
    Specialization VARCHAR(100),
    ContactNumber VARCHAR(15),
    Email VARCHAR(100) NOT NULL
);

-- Creating Patients Table
CREATE TABLE Patients (
    PatientID INT PRIMARY KEY,
    Name VARCHAR(100) NOT NULL,
    DOB DATE,
    Gender TEXT CHECK (Gender IN ('Male', 'Female', 'Other')),
    ContactNumber VARCHAR(15),
    Address TEXT
);

-- Creating Appointments Table
CREATE TABLE Appointments (
    AppointmentID INT PRIMARY KEY,
    PatientID INT,
    DoctorID INT,
    AppointmentDate DATE,
    Status TEXT CHECK (Status IN ('Scheduled', 'Completed', 'Cancelled')),
    FOREIGN KEY (PatientID) REFERENCES Patients(PatientID) ON DELETE CASCADE,
    FOREIGN KEY (DoctorID) REFERENCES Doctors(DoctorID) ON DELETE SET NULL
);

-- Creating Treatments Table
CREATE TABLE Treatments (
    TreatmentID INT PRIMARY KEY,
    PatientID INT,
    DoctorID INT,
    Diagnosis VARCHAR(255),
    TreatmentDescription TEXT,
    TreatmentDate DATE,
    FOREIGN KEY (PatientID) REFERENCES Patients(PatientID) ON DELETE CASCADE,
    FOREIGN KEY (DoctorID) REFERENCES Doctors(DoctorID) ON DELETE SET NULL
);

-- Creating MedicalRecords Table
CREATE TABLE MedicalRecords (
    RecordID INT PRIMARY KEY,
    PatientID INT,
    TreatmentID INT,
    Notes TEXT,
    RecordDate DATE,
    FOREIGN KEY (PatientID) REFERENCES Patients(PatientID) ON DELETE CASCADE,
    FOREIGN KEY (TreatmentID) REFERENCES Treatments(TreatmentID) ON DELETE CASCADE
);

-- Creating Billing Table
CREATE TABLE Billing (
    BillID INT PRIMARY KEY,
    PatientID INT,
    TreatmentID INT,
    Amount REAL,
    BillDate DATE,
    Status TEXT CHECK (Status IN ('Paid', 'Unpaid')),
    FOREIGN KEY (PatientID) REFERENCES Patients(PatientID) ON DELETE CASCADE,
    FOREIGN KEY (TreatmentID) REFERENCES Treatments(TreatmentID) ON DELETE CASCADE
);
