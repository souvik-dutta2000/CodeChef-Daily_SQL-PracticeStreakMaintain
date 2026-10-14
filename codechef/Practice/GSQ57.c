// Problem: GSQ57
// Platform: codechef
// Language: /* Solution as follows */

CREATE TABLE customer
(
  Id INT PRIMARY KEY,
  Name VARCHAR(30),
  Age INT,
  Address VARCHAR(30),
  email VARCHAR(30) UNIQUE
);
INSERT INTO customer(Id,Name,Age,Address,email)
VALUES  (1, 'John Smith', 25,  '123 Main St','john@example.com'),
        (2, 'Sarah Johnson', 30,'456 Broadway','sarah@example.com'),
        (3, 'Michael Brown', 45,  '789 5th Ave','michael@example.com'),
        (4, 'Jessica Davis', 28,  '321 Elm St','vy@example.com');
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS03/problems/GSQ57?tab=solution
// Solved on: 2026-10-14T19:00:45.806Z

CREATE TABLE customer
(
  Id INT PRIMARY KEY,
  Name VARCHAR(30),
  Age INT,
  Address VARCHAR(30),
  email VARCHAR(30) UNIQUE
);
INSERT INTO customer(Id,Name,Age,Address,email)
VALUES  (1, 'John Smith', 25,  '123 Main St','john@example.com'),
        (2, 'Sarah Johnson', 30,'456 Broadway','sarah@example.com'),
        (3, 'Michael Brown', 45,  '789 5th Ave','michael@example.com'),
        (4, 'Jessica Davis', 28,  '321 Elm St','vy@example.com');