// Problem: GSQ53
// Platform: codechef
// Language: /* Solution as follows */

CREATE TABLE customer
(
  Id INT,
  Name TEXT,
  Age INT,
  Address TEXT
);

INSERT INTO customer(Id,Name,Age,Address)
VALUES(1, 'John Smith', 25,  '123 Main St'),
(2, 'Sarah Johnson', 30,'456 Broadway'),
(3, 'Michael Brown', 45, '789 5th Ave'),
(4, 'Jessica Davis', 28, '321 Elm St'),
(5, 'David Lee', 35,  '555 Park Ave');


select  * from customer;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/sql/SQ00LS03/problems/GSQ53?tab=solution
// Solved on: 2026-10-14T18:52:57.821Z

/* Write a query which does the following */

-- Create a table 'customer'


CREATE TABLE customer
(
  Id INT,
  Name TEXT,
  Age INT,
  Address TEXT
);





-- Insert data into the table 
insert into customer(Id,Name,Age,Address)
VALUES(1, 'John Smith', 25,  '123 Main St'),
(2, 'Sarah Johnson', 30,'456 Broadway'),
(3, 'Michael Brown', 45, '789 5th Ave'),
(4, 'Jessica Davis', 28, '321 Elm St'),
(5, 'David Lee', 35,  '555 Park Ave');

-- Output the entire table
select * from customer;
